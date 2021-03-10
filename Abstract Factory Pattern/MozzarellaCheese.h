#pragma once
#include <string>
#include "ICheese.h"

class MozzarellaCheese : public ICheese {
public:
	MozzarellaCheese() {
		setType("Mozzarella");
	};
};