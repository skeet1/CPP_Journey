/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:54:47 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 09:15:26 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Player {
    private:
        std::string _name;
        std::string _club;
        int _age;
    public:
        Player() {};
        Player(std::string name, std::string club, int age): _name(name), _club(club), _age(age){};
        std::string getName()
        {
            return _name;
        }
        std::string getClub()
        {
            return _club;
        }
        int getAge()
        {
            return _age;
        }

        void setName(std::string name)
        {
            _name = name;
        }
        void setClub(std::string club)
        {
            _club = club;
        }
        void setAge(int age)
        {
            _age = age;
        }
};

class InfoPlayer : public Player {
    public:
        std::string clubFrom;
        std::string infoGetName()
        {
            return _name;
        }
};

int main()
{
    InfoPlayer p1;
    p1.setName("chi haja");
    std::cout << p1.getName() << std::endl;
    return (0);
}