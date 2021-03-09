#pragma once
#include <set>
#include <algorithm>
#include "ISubject.h"

class WeatherData : public ISubject {
public:

	WeatherData() : temperature(0), humidity(0), pressure(0) {};

	void changeMeasurements(float temp, float humidity, float pressure) {
		this->temperature = temp;
		this->humidity = humidity;
		this->pressure = pressure;
		notifyObservers();
	}

	void notifyObservers() {
		std::for_each(observers.begin(), observers.end(), [](IObserver* observer) {
			observer->update();
			});
	}

	void registerObserver(IObserver* observer) {
		observers.insert(observer);
	}

	void removeObserver(IObserver* observer) {
		observers.erase(observer);
	}	

	float getTemperature() {
		return temperature;
	}

	float getHumidity() {
		return humidity;
	}

	float getPressure() {
		return pressure;
	}

private:
	std::set<IObserver*> observers;
	float temperature, humidity, pressure;
};