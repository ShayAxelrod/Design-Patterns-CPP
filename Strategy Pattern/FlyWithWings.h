#pragma once
#include <iostream>
#include "IFlyBehavior.h"

class FlyWithWings : public IFlyBehavior {
public:
	void fly() {
		std::cout << "I can fly." << std::endl;
	}
};