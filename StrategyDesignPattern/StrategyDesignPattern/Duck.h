#pragma once
#include "IFlyBehaviour.h"
#include "IQuackBehaviour.h"

class Duck
{
public:
	Duck();
	virtual ~Duck() {};
	void Swim();
	void Display();
	void PerformFlying();
	void PerformQuacking();
	void SetFlyBehaviour(IFlyBehaviour *flyBehaviour);
	void SetQuackBehaviour(IQuackBehaviour *quackBehaviour);

protected:

	IFlyBehaviour *flyBehaviour;
	IQuackBehaviour *quackBehaviour;
};

class MallardDuck : public Duck
{
public:
	MallardDuck(IFlyBehaviour *fb, IQuackBehaviour *qb)
	{
		flyBehaviour = fb;
		quackBehaviour = qb;
	}
};

//class RedHeadDuck : public Duck
//{
//	RedHeadDuck(IFlyBehaviour *fb, IQuackBehaviour *qb)
//	{
//		flyBehaviour = fb;
//		quackBehaviour = qb;
//	}
//};
//
//class RubberDuck : public Duck
//{
//	RubberDuck(IFlyBehaviour *fb, IQuackBehaviour *qb)
//	{
//		flyBehaviour = fb;
//		quackBehaviour = qb;
//	}
//};
//
//class DecoyDuck : public Duck
//{
//	DecoyDuck(IFlyBehaviour *fb, IQuackBehaviour *qb)
//	{
//		flyBehaviour = fb;
//		quackBehaviour = qb;
//	}
//};