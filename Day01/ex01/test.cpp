#include "Zombie.hpp"

std::string createName()
{
    std::string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string myString = "";
    for (int i = 0; i < 10; i++)
        myString += alph[std::rand() % 62];
	return myString;
}

int main()
{
	for (int i = 0; i < 3; i++)
		std::cout << createName() << std::endl;
	return (0);
}
