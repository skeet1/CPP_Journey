/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:36:16 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/24 15:39:45 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <iostream>
#include <cstring>

#define CHAR_TYPE   0
#define INT_TYPE    1
#define FLOAT_TYPE  2
#define DOUBLE_TYPE 3
#define ERROR       4

int num_of_digit(char *s);
int find_point(char *s);
char* trim_arg(char *s);

void print_as_char(std::string s);
void print_as_int(std::string s);
void print_as_float(std::string s);
void print_as_double(std::string s);

#endif