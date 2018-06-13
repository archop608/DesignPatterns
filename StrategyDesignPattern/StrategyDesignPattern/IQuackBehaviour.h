#include <iostream>

#pragma once
class IQuackBehaviour
{
public:
	IQuackBehaviour() { std::cout << "IQuackBehaviour constructor called\n"; };
	virtual ~IQuackBehaviour() {};
	virtual void Quacking() {
		std::cout << "I am the base quack class\n";
		std::cin.ignore();
	};
};

class Quack : public IQuackBehaviour
{
public:
	Quack()
	{
		std::cout << "IQuackBehaviour Quack constructor called\n";
	}

	void Quacking();
};

class Sqeak : public IQuackBehaviour
{
	void Quacking();
};

class MuteQuack : public IQuackBehaviour
{
	void Quacking();
};