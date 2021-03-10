#pragma once
#include <iostream>
#include <memory>
#include <string>
#include "IPizza.h"
#include "IPizzaIngredientFactory.h"

class CheesePizza : public IPizza {
public:
	std::shared_ptr<IPizzaIngredientFactory> ingredientFactory;

	CheesePizza(std::shared_ptr<IPizzaIngredientFactory> ingredientFactory) {
		this->ingredientFactory = ingredientFactory;
	}

	void prepare() {
		std::cout << "Preparing " << getName() << std::endl;
		dough = ingredientFactory->createDough();
		cheese = ingredientFactory->createCheese();
		std::cout << "Dough: " << dough->getType() << ", Cheese: " << cheese->getType() << std::endl;
	}
};