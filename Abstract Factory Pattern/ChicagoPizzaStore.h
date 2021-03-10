#pragma once
#include <string>
#include <memory>
#include "IPizzaStore.h"
#include "IPizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "IPizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"

class ChicagoPizzaStore : public IPizzaStore {
protected:
	std::shared_ptr<IPizza> createPizza(std::string item) {
		std::shared_ptr<IPizza> pizza = nullptr;
		std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = std::make_shared<ChicagoPizzaIngredientFactory>();

		if (item == "cheese") {
			pizza = std::make_shared<CheesePizza>(ingredientFactory);
			pizza->setName("Chicago Style Cheese Pizza");
		}
		else if (item == "pepperoni") {
			pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
			pizza->setName("Chicago Style Pepperoni Pizza");
		}
		return pizza;
	}
};