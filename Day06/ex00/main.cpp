/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:36:19 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/24 16:10:41 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int type = 4;
        char *s = trim_arg(argv[1]);
        if (!isdigit(s[strlen(s) - 1]) && s[strlen(s) - 1] != 'f') type = ERROR;
        if (find_point(s))
        {
            if (strlen(s) <= 2) type = ERROR;
            size_t valid = num_of_digit(s);
            if (valid == strlen(s) - 1 && valid) type = DOUBLE_TYPE;
            else if (valid == strlen(s) - 2 && valid && s[strlen(s) - 1] == 'f') type = FLOAT_TYPE;
            else type = ERROR;
        }
        if (strlen(s) == 1 && isascii(*s) && !isdigit(*s)) type = CHAR_TYPE;
        size_t dig_count = num_of_digit(s);
        if (dig_count == strlen(s) || (dig_count == strlen(s) - 1 && (s[0] == '-' || s[0] == '+') && strlen(s) > 1)) type = INT_TYPE;
        if (type == ERROR)
        {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: nanf\n";
            std::cout << "double: nan\n";
            return 0;
        }
        std::cout << std::fixed << std::setprecision(1);
        if (type == CHAR_TYPE) print_as_char(s);
        else if (type == INT_TYPE) print_as_int(s);
        else if (type == FLOAT_TYPE) print_as_float(s);
        else if (type == DOUBLE_TYPE) print_as_double(s);
    }
    else
        std::cout << "Invalid Arguments!!!\n";
    return 0;
}