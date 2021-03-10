#pragma once
#include <iostream>
#include <string>
#include "IPizza.h"

class ChicagoStylePepperoniPizza : public IPizza {
public:
	ChicagoStylePepperoniPizza() {
		name = "Chicago Style Deep Dish Pepperoni Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
	}

	void cut() {
		std::cout << "Cutting the pizza into square slices" << std::endl;
	}
};