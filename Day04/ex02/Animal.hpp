/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:28:42 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/17 09:15:57 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &obj);
        virtual ~Animal();
        Animal &operator=(const Animal &obj);
        
        std::string getType() const;
        virtual void makeSound() const = 0;
};

class Dog : public Animal {
    private:
        Brain* _dogBrain;
    public:
        Dog();
        Dog(const Dog &obj);
        ~Dog();
        Dog &operator=(const Dog &obj);
        
        Dog(Brain &obj);
        void makeSound() const;
};

class Cat : public Animal {
    private:
        Brain* _catBrain;
    public:
        Cat();
        Cat(const Cat &obj);
        ~Cat();
        Cat &operator=(const Cat &obj);
        
        Cat(Brain &obj);
        void makeSound() const;
};

#endif
