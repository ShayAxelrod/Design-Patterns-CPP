#pragma once
#include <memory>
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

class Duck {
public:
	std::shared_ptr<IQuackBehavior> quackBehavior;
	std::shared_ptr<IFlyBehavior> flyBehavior;

	void performQuack() {
		quackBehavior->quack();
	}

	void performFly() {
		flyBehavior->fly();
	}

	void setQuackBehavior(std::shared_ptr<IQuackBehavior> qb) {
		quackBehavior = qb;
	}

	void setFlyBehavior(std::shared_ptr<IFlyBehavior> fb) {
		flyBehavior = fb;
	}
	
	virtual void display() = 0;

};