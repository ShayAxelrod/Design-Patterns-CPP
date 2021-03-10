#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class IPizza {
public:
	std::string name;
	std::string dough;
	std::string sauce;
	std::vector<std::string> toppings;

	virtual void prepare() {
		std::cout << "Preparing " << name << std::endl;
		std::cout << "Tossing dough..." << std::endl;
		std::cout << "Adding sauce" << std::endl;
		std::cout << "Adding toppings " << std::endl;
		std::for_each(toppings.begin(), toppings.end(), [](std::string topping) {
			std::cout << topping << " " << std::endl;
			});
	}

	virtual void bake() {
		std::cout << "Bake for 25 minutes at 350" << std::endl;
	}

	virtual void cut() {
		std::cout << "Cutting the pizza into diagonal slices" << std::endl;
	}

	virtual void box() {
		std::cout << "Place pizza in official PizzaStore box" << std::endl;
	}

	std::string getName() {
		return name;
	}

};