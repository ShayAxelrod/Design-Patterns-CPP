#pragma once
#include <iostream>
#include <string>
#include "IPizza.h"

class NYStyleCheesePizza : public IPizza {
public:
	NYStyleCheesePizza() {
		name = "NY Style Sauce and Cheese Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara Sauce";
		toppings.push_back("Grated Reggiano Cheese");
	}
};