#pragma once
#include <string>
#include "IDough.h"

class ThinCrustDough : public IDough {
public:
	ThinCrustDough() {
		setType("Thin Crust");
	};
};