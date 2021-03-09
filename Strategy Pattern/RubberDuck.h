#include <memory>
#include <iostream>
#include "Duck.h"
#include "Squeak.h"
#include "FlyNoWay.h"

class RubberDuck : public Duck {
public:
	RubberDuck() {
		quackBehavior = std::make_shared<Squeak>();
		flyBehavior = std::make_shared<FlyNoWay>();
	}

	void display() {
		std::cout << "I'm a RubberDuck." << std::endl;
	}
};