#include <memory>
#include <iostream>
#include "Duck.h"
#include "MuteQuack.h"
#include "FlyNoWay.h"

class DecoyDuck : public Duck {
public:
	DecoyDuck() {
		quackBehavior = std::make_shared<MuteQuack>();
		flyBehavior = std::make_shared<FlyNoWay>();
	}

	void display() {
		std::cout << "I'm a DecoyDuck." << std::endl;
	}
};