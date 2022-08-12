/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:30:15 by mkarim            #+#    #+#             */
/*   Updated: 2022/08/12 12:37:23 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		long	phoneNumber;
		std::string	darketSecret;
		Contact();
		~Contact();
};

#endif
