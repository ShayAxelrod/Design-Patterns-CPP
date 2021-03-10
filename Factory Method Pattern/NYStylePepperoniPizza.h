#pragma once
#include <iostream>
#include <string>
#include "IPizza.h"

class NYStylePepperoniPizza : public IPizza {
public:
	NYStylePepperoniPizza() {
		name = "NY Style Sauce and Pepperoni Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara Sauce";
		toppings.push_back("Grated Reggiano Cheese");
	}
};