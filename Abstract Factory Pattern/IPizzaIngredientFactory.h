#pragma once
#include <memory>
#include "ICheese.h"
#include "IDough.h"

class IPizzaIngredientFactory {
public:
	virtual std::shared_ptr<ICheese> createCheese() = 0;
	virtual std::shared_ptr<IDough> createDough() = 0;;
};