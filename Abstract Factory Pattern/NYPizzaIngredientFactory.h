#pragma once
#include <memory>
#include "IPizzaIngredientFactory.h"
#include "ReggianoCheese.h"
#include "ThinCrustDough.h"

class NYPizzaIngredientFactory : public IPizzaIngredientFactory {
public:
	std::shared_ptr<ICheese> createCheese() {
		return std::make_shared<ReggianoCheese>();
	}

	std::shared_ptr<IDough> createDough() {
		return std::make_shared<ThinCrustDough>();
	}

};