/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:14:28 by mkarim            #+#    #+#             */
/*   Updated: 2022/08/11 16:14:30 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])		
		{
			j = 0;
			while (argv[i][j])
			{
				if (std::islower(argv[i][j]))
					argv[i][j] = std::toupper(argv[i][j]);
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}