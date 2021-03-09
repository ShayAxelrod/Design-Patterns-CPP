#pragma once
#include <iostream>
#include <memory>
#include "IObserver.h"
#include "WeatherData.h"

class CurrentConditionsDisplay : public IObserver {
public:
	CurrentConditionsDisplay(std::shared_ptr<WeatherData> weatherData) {
		this->weatherData = weatherData;
		subscribe();
	}

	void update() {
		temperature = weatherData->getTemperature();
		humidity = weatherData->getHumidity();
		display();
	}

	void display() {
		std::cout << "CurrentConditionsDisplay: Temp is " << temperature << ", Humidity is " << humidity << std::endl;
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
	float temperature, humidity;

	void subscribe() {
			weatherData->registerObserver(this);
		}
};