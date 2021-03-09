#pragma once
#include <iostream>
#include "IFlyBehavior.h"

class FlyNoWay : public IFlyBehavior {
public:
	void fly() {
		std::cout << "I can't fly." << std::endl;
	}
};