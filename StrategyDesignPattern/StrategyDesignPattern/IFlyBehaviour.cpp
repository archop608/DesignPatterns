#include "IFlyBehaviour.h"

void FlyWithWings::Fly()
{
	std::cout << "I am flying with wings\n";
	std::cin.ignore();
}

void FlyNoWay::Fly()
{
	std::cout << "I can't fly\n";
	std::cin.ignore();
}