/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:03:41 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/03 18:16:42 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string myString   = "HI THIS IS BRAIN";
    std::string *stringPtr = &myString;
    std::string &stringRef = myString;

    std::cout << &myString << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;
    
    std::cout << myString << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;

    return (0);
}