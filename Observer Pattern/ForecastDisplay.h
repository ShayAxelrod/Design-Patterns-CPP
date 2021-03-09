#pragma once
#include <iostream>
#include <memory>
#include "IObserver.h"
#include "WeatherData.h"

class ForecastDisplay : public IObserver {
public:
	ForecastDisplay(std::shared_ptr<WeatherData> weatherData) {
		this->weatherData = weatherData;
		subscribe();
	}

	void update() {
		temperature = weatherData->getTemperature();
		pressure = weatherData->getPressure();
		display();
	}

	void display() {
		std::cout << "ForecastDisplay: Temp is " << temperature << ", Pressure is " << pressure << std::endl;
	}

	void subscribe(std::shared_ptr<WeatherData> weatherData) {
		this->weatherData = weatherData;
		subscribe();
	}

	void unsubscribe() {
		weatherData->removeObserver(this);
	}

private:
	std::shared_ptr<WeatherData> weatherData;
	float temperature, pressure;

	void subscribe() {
		weatherData->registerObserver(this);
	}
};