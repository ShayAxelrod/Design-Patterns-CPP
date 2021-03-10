# Factory Method Pattern 🍕

*Also Known As (Virtual Constructor)*

> Definition: Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.



<img src="Factory Method Pattern.png" title="Class Diagram Image">

_This example is inspired from the book **[Head First: Design Patterns Second Edition](https://www.amazon.com/dp/149207800X/ref=cm_sw_em_r_mt_dp_SZN9DWRD8Y55S5CZW5K5?_encoding=UTF8&psc=1 )**_

**Factory Method Pattern.cpp**
```c++
#include <iostream>
#include <memory>
#include "IPizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "IPizza.h"

using namespace std;

int main() {
    
    shared_ptr<IPizzaStore> nyStore = make_shared<NYPizzaStore>();
    shared_ptr<IPizzaStore> chicagoStore = make_shared<ChicagoPizzaStore>();

    shared_ptr<IPizza> pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl;
    
    cout << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;

    return 0;
}

```
**Console:**
```
Preparing NY Style Sauce and Cheese Pizza
Tossing dough...
Adding sauce
Adding toppings
Grated Reggiano Cheese
Bake for 25 minutes at 350
Cutting the pizza into diagonal slices
Place pizza in official PizzaStore box
Ethan ordered a NY Style Sauce and Cheese Pizza

Preparing Chicago Style Deep Dish Cheese Pizza
Tossing dough...
Adding sauce
Adding toppings
Shredded Mozzarella Cheese
Bake for 25 minutes at 350
Cutting the pizza into square slices
Place pizza in official PizzaStore box
Joel ordered a Chicago Style Deep Dish Cheese Pizza
```
