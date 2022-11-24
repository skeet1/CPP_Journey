/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:36:14 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/24 16:10:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int     find_point(char *s)
{
    // std::cout << "check point : " << s << std::endl;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.')
            return 1;
    }
    return 0;
}

int     num_of_digit(char *s)
{
    int num_of_digit = 0;

    for (size_t i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]))
        {
            num_of_digit++;
        }
    }
    return num_of_digit;
}

char* trim_arg(char *s)
{
    while (*s)
    {
        if (!isspace(*s) && *s != '\'' && *s != '"')
            break;
        s++;
    }
    for (size_t i = strlen(s); i > 0; i--)
    {
        if (!isspace(s[i-1]) && s[i-1] != '\'' && s[i-1] != '"')
        {
            s[i] = '\0';
            break;
        }
    }
    return s;
}

void print_as_char(std::string s)
{
    char c = s[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << (int)c << std::endl;
    std::cout << "float: " << (float)c << "f" << std::endl;
    std::cout << "double: " << (double)c << std::endl;
}

void print_as_int(std::string s)
{
    int c = stoi(s);
    std::cout << "char: ";
    if (isprint((int)c))
        std::cout << "'" << (char)c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << c << std::endl;
    std::cout << "float: " << (float)c << "f" << std::endl;
    std::cout << "double: " << (double)c << std::endl;
}

void print_as_float(std::string s)
{
    float c = stof(s);
    std::cout << "char: ";
    if (isprint((int)c))
        std::cout << "'" << (char)c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << (int)c << std::endl;
    std::cout << "float: " << c << "f" << std::endl;
    std::cout << "double: " << (double)c << std::endl;
}

void print_as_double(std::string s)
{
    double c = stod(s);
    std::cout << "char: ";
    if (isprint((int)c))
        std::cout << "'" << (char)c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << (int)c << std::endl;
    std::cout << "float: " << (float)c << "f" << std::endl;
    std::cout << "double: " << c << std::endl;
}

