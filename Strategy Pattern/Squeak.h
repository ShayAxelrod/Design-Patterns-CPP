#pragma once
#include <iostream>
#include "IQuackBehavior.h"

class Squeak : public IQuackBehavior {
public:
	void quack() {
		std::cout << "Squeak!" << std::endl;
	}
};