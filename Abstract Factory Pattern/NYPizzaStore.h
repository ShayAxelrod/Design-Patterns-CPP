#pragma once
#include <string>
#include <memory>
#include "IPizzaStore.h"
#include "IPizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "IPizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"

class NYPizzaStore : public IPizzaStore {
protected:
	std::shared_ptr<IPizza> createPizza(std::string item) {
		std::shared_ptr<IPizza> pizza = nullptr;
		std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();

		if (item == "cheese") {
			pizza = std::make_shared<CheesePizza>(ingredientFactory);
			pizza->setName("New York Style Cheese Pizza");
		}
		else if (item == "pepperoni") {
			pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
			pizza->setName("New York Style Pepperoni Pizza");
		}
		return pizza;
	}
};