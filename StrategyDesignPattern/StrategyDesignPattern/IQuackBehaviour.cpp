#include "IQuackBehaviour.h"

void Quack::Quacking()
{
	std::cout << "I am quacking\n";
	std::cin.ignore();
}	

void Sqeak::Quacking()
{
	std::cout << "I am squeaking\n";
	std::cin.ignore();
}

void MuteQuack::Quacking()
{
	std::cout << "I am mute\n";
	std::cin.ignore();
}