#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "IPizzaStore.h"
#include "IPizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"

class NYPizzaStore : public IPizzaStore {
public:
	std::shared_ptr<IPizza> createPizza(std::string type) {
		if (type == "cheese") {
			return std::make_shared<NYStyleCheesePizza>();
		}
		else if (type == "pepperoni") {
			return std::make_shared<NYStylePepperoniPizza>();
		}
		else {
			return nullptr;
		}
	}
};