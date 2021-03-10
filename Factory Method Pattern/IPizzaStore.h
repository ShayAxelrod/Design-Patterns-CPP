#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "IPizza.h"

class IPizzaStore {
public:	
	std::shared_ptr<IPizza> orderPizza(std::string type) {
		std::shared_ptr<IPizza> pizza;
		pizza = createPizza(type);
		
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		
		return pizza;
	}

protected:
	virtual std::shared_ptr<IPizza> createPizza(std::string type) = 0;
};