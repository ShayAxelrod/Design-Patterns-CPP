#pragma once
#include <string>
#include "IDough.h"

class ThickCrustDough : public IDough {
public:
	ThickCrustDough() {
		setType("Thick Crust");
	};
};