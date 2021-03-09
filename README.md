# Observer Pattern ☁🌡

*Also Known As (Dependents, Publish-Subscribe)*

> Definition: Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.



<img src="Observer Pattern.png" title="Class Diagram Image">

_This example is inspired from the book **[Head First: Design Patterns Second Edition](https://www.amazon.com/dp/149207800X/ref=cm_sw_em_r_mt_dp_SZN9DWRD8Y55S5CZW5K5?_encoding=UTF8&psc=1 )**_

**Observer Pattern.cpp**
```c++
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
```
**Console:**
```
CurrentConditionsDisplay: Temp is 90, Humidity is 2
ForecastDisplay: Temp is 90, Pressure is 1
CurrentConditionsDisplay: Temp is 76, Humidity is 12
ForecastDisplay: Temp is 76, Pressure is 5
CurrentConditionsDisplay: Temp is 105, Humidity is 6
```
