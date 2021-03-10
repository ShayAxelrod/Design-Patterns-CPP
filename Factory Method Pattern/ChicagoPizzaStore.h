#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "IPizzaStore.h"
#include "IPizza.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"

class ChicagoPizzaStore : public IPizzaStore {
public:
	std::shared_ptr<IPizza> createPizza(std::string type) {
		if (type == "cheese") {
			return std::make_shared<ChicagoStyleCheesePizza>();
		}
		else if (type == "pepperoni") {
			return std::make_shared<ChicagoStylePepperoniPizza>();
		}
		else {
			return nullptr;
		}
	}
};