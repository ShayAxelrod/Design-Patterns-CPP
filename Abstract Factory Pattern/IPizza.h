#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "IDough.h"
#include "ICheese.h"

class IPizza {
public:
	std::string name;

	std::shared_ptr<IDough> dough;
	std::shared_ptr<ICheese> cheese;

	virtual void prepare() = 0;

	virtual void bake() {
		std::cout << "Bake for 25 minutes at 350" << std::endl;
	}

	virtual void cut() {
		std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}

	virtual void box() {
		std::cout << "Place pizza in official PizzaStore box" << std::endl;
	}

	void setName(const std::string name) {
		this->name = name;
	}

	const std::string getName() {
		return name;
	}
};