#pragma once

#include <iostream>
class IFlyBehaviour
{
public:
	IFlyBehaviour() { std::cout << "IFlyBehaviour constructor called\n"; };
	IFlyBehaviour(const IFlyBehaviour &fb)
	{
		std::cout << "IFlyBehaviour copy constructor called\n";
		*this = fb;
	}
	virtual ~IFlyBehaviour() {};
	virtual void Fly() {
		std::cout << "I am the base fly class\n";
		std::cin.ignore();
	};
};

class FlyWithWings : public IFlyBehaviour
{
public:
	virtual void Fly();
	FlyWithWings()
	{
		std::cout << "IFlyBehaviour Flywithwings constructor called\n";
	}
};

class FlyNoWay : public IFlyBehaviour
{
public:
	virtual void Fly();
};