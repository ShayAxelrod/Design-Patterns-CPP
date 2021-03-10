#pragma once
#include <string>

class ICheese {
public:
	std::string type;

	void setType(std::string type) {
		this->type = type;
	}

	std::string getType() {
		return type;
	}
};