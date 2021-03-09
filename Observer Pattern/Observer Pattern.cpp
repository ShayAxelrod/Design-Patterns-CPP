#include <iostream>
#include <memory>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "ForecastDisplay.h"

using namespace std;

int main() {
    
    shared_ptr<WeatherData> weatherStation = make_shared<WeatherData>();
    unique_ptr<CurrentConditionsDisplay> currentConditionsDisplay = make_unique<CurrentConditionsDisplay>(weatherStation);
    unique_ptr<ForecastDisplay> forecastDisplay = make_unique<ForecastDisplay>(weatherStation);

    weatherStation->changeMeasurements(90, 2, 1);
    weatherStation->changeMeasurements(76, 12, 5);

    forecastDisplay->unsubscribe();
    weatherStation->changeMeasurements(105, 6, 3);

    return 0;
}
