#include"Duck.h"

#pragma once

int main()
{	
	Quack *qb = new Quack();
	IFlyBehaviour *fbb = new FlyWithWings();
	//IFlyBehaviour base = *fbb;  Copy constructor is called here but FlyWithWings object cannot be converted to IFlyBehavior
	//base.Fly();     This will call the base class's Fly method.
	// So, always use pointers like below, instead of passing by value and creating new objects, leading to copy constructor calls.
	// IFlyBehaviour *der = fbb;
	// der->Fly();   // This will call FlyWithWings's Fly method.
	MallardDuck *firstDuck = new MallardDuck(fbb, qb);
	firstDuck->PerformFlying();
	firstDuck->PerformQuacking();

	return 0;
}

/*
	Q - Why in case of IFlyBehaviour base = *fbb infinite copy constructors were not called?
	-> Because by default, copy constructor always accepts aruguments by reference, just to avoid the problem mentioned in the question. 
	
	Q - Why couldn't derived class objectin IFlyBehaviour base = *fbb (fbb here) cast itself into base class's object in base class's copy constructor?
	-> 
*/
