/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:03:53 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/05 11:59:48 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

std::string edit_line(std::string line, int ind, int len, std::string s2)
{
    std::string newLine;
    int i;

    for (i = 0; i < ind; i++)
        newLine += line[i];
    newLine += s2;
    i += len;
    for (; i < (int) line.length(); i++)
        newLine += line[i];
    return newLine;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invalid number of arguments\n";
        return (1);
    }
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream myFile(fileName);
    std::ofstream newFile(fileName + ".replace");
    std::string line;
    int i = 1;
    while (std::getline(myFile, line))
    {
        if (line.find(s1) <= line.length())
        {
            std::cout << "found in line : " << i << "\n";
            newFile << edit_line(line, line.find(s1), s1.length(), s2);
        }
        else
            newFile << line;
        newFile << "\n";
        i++;
    }
    return (0);
}