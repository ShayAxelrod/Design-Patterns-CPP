#pragma once
#include <iostream>
#include "IQuackBehavior.h"

class MuteQuack : public IQuackBehavior {
public:
	void quack() {
		std::cout << "I make no sound!" << std::endl;
	}
};