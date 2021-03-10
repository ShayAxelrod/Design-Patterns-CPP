#pragma once
#include <string>
#include "ICheese.h"

class ReggianoCheese : public ICheese {
public:
	ReggianoCheese() {
		setType("Reggiano");
	};
};