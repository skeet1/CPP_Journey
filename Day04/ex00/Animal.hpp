/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:28:42 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/17 09:11:17 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &obj);
        virtual ~Animal();
        Animal &operator=(const Animal &obj);
        
        std::string getType() const;
        virtual void makeSound() const;
};

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &obj);
        ~Dog();
        Dog &operator=(const Dog &obj);
        
        void makeSound() const;
};

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &obj);
        ~Cat();
        Cat &operator=(const Cat &obj);
        
        void makeSound() const;
};

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &obj);
        
        std::string getType() const;
        virtual void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &obj);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &obj);
        
        void makeSound() const;
};

#endif
