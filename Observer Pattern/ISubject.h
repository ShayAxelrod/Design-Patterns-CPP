#pragma once
#include <memory>
#include "IObserver.h"

class ISubject {
public:
	virtual void notifyObservers() = 0;
	virtual void registerObserver(IObserver*observer) = 0;
	virtual void removeObserver(IObserver*observer) = 0;
};