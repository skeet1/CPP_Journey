/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:35:32 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/17 09:07:46 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Animal 

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal Default Constructor Called\n";
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Copy assingment operator Called\n";
    this->_type = obj._type;
    return *this;
}

Animal::Animal(const Animal &obj)
{
    _type = "Animal";
    std::cout << "Animal Copy Constructor Called\n";
    *this = obj;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called\n";
}

std::string Animal::getType() const
{
    return _type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal Sound\n";
}

// WrongAnimal 

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy assingment operator Called\n";
    this->_type = obj._type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal Copy Constructor Called\n";
    *this = obj;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called\n";
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound\n";
}

// Dog

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog Default Constructor Called\n";
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assingment operator Called\n";
    this->_type = obj._type;
    return *this;
}

Dog::Dog(const Dog &obj)
{
    _type = "Dog";
    std::cout << "Dog Copy Constructor Called\n";
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called\n";
}

void    Dog::makeSound() const
{
    std::cout << "Dog Sound\n";
}

// Cat

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat Default Constructor Called\n";
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assingment operator Called\n";
    this->_type = obj._type;
    return *this;
}

Cat::Cat(const Cat &obj)
{
    _type = "Cat";
    std::cout << "Cat Copy Constructor Called\n";
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called\n";
}

void    Cat::makeSound() const 
{
    std::cout << "Cat Sound\n";
}

// WrongCat

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat Copy assingment operator Called\n";
    this->_type = obj._type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    _type = "WrongCat";
    std::cout << "WrongCat Copy Constructor Called\n";
    *this = obj;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called\n";
}

void    WrongCat::makeSound() const 
{
    std::cout << "WrongCat Sound\n";
}

