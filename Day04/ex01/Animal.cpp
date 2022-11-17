/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:35:32 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/16 17:26:01 by mkarim           ###   ########.fr       */
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

// Dog

Dog::Dog()
{
    _type = "Dog";
    _dogBrain = new Brain();
    std::cout << "Dog Default Constructor Called\n";
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assingment operator Called\n";
    _type = obj._type;
    if (_dogBrain)
    {
        delete _dogBrain;
        _dogBrain = NULL;
    }
    _dogBrain = new Brain();
    _dogBrain = obj._dogBrain;
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
    delete _dogBrain;
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
    _catBrain = new Brain();
    std::cout << "Cat Default Constructor Called\n";
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assingment operator Called\n";
    _type = obj._type;
    if (_catBrain)
    {
        delete _catBrain;
        _catBrain = NULL;
    }
    _catBrain = obj._catBrain;
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
    delete _catBrain;
    std::cout << "Cat Destructor Called\n";
}

void    Cat::makeSound() const 
{
    std::cout << "Cat Sound\n";
}

