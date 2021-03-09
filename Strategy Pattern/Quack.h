#pragma once
#include <iostream>
#include "IQuackBehavior.h"

class Quack : public IQuackBehavior {
public:
	void quack() {
		std::cout << "Quack!" << std::endl;
	}
};