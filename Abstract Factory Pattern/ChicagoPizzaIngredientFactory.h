#pragma once
#include <memory>
#include "IPizzaIngredientFactory.h"
#include "MozzarellaCheese.h"
#include "ThickCrustDough.h"

class ChicagoPizzaIngredientFactory : public IPizzaIngredientFactory {
public:
	std::shared_ptr<ICheese> createCheese() {
		return std::make_shared<MozzarellaCheese>();
	}

	std::shared_ptr<IDough> createDough() {
		return std::make_shared<ThickCrustDough>();
	}

};