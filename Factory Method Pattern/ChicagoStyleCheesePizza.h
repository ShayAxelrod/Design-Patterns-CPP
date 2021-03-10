#pragma once
#include <iostream>
#include <string>
#include "IPizza.h"

class ChicagoStyleCheesePizza : public IPizza {
public:
	ChicagoStyleCheesePizza() {
		name = "Chicago Style Deep Dish Cheese Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
	}

	void cut() {
		std::cout << "Cutting the pizza into square slices" << std::endl;
	}
};