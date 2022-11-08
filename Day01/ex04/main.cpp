/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:03:53 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/08 09:36:59 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

void edit_line(std::string &line, int ind, int len, std::string s2)
{
    line.erase(ind, len);
    line.insert(ind, s2);
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
    size_t start = 0;
    while (std::getline(myFile, line))
    {
        start = 0;
        while (line.find(s1, start) != std::string::npos)
        {
            start = line.find(s1, start);
            edit_line(line, line.find(s1, start), s1.length(), s2);
            start += s2.length();
        }
        newFile << line;
        newFile << "\n";
    }
    return (0);
}