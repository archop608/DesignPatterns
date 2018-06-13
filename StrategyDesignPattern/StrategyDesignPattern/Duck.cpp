#include "Duck.h"

Duck::Duck()
{

}

void Duck::Display()
{
	std::cout << "I am displaying something\n";
}

void Duck::Swim()
{
	std::cout << "I am swimming\n";
}

void Duck::PerformFlying()
{
	//std::cout << "I am Flying\n";
	flyBehaviour->Fly();
}

void Duck::PerformQuacking()
{
	//std::cout << "I am Quacking";
	quackBehaviour->Quacking();
}

void Duck::SetFlyBehaviour(IFlyBehaviour *newFlyBehaviour)
{
	flyBehaviour = newFlyBehaviour;
}

void Duck::SetQuackBehaviour(IQuackBehaviour *newQuackBehaviour)
{
	quackBehaviour = newQuackBehaviour;
}