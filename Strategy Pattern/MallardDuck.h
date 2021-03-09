#include <memory>
#include <iostream>
#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck {
public:
	MallardDuck() {
		quackBehavior = std::make_shared<Quack>();
		flyBehavior = std::make_shared<FlyWithWings>();
	}

	void display() {
		std::cout << "I'm a MallardDuck." << std::endl;
	}
};