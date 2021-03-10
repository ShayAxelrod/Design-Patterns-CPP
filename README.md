# Abstract Factory Pattern 🍕

*Also Known As (Kit)*

> Definition: Provide an interface for creating families of related or dependent objects without specifying their concrete classes.



<img src="Abstract Factory Pattern.png" title="Class Diagram Image">

_This example is inspired from the book **[Head First: Design Patterns Second Edition](https://www.amazon.com/dp/149207800X/ref=cm_sw_em_r_mt_dp_SZN9DWRD8Y55S5CZW5K5?_encoding=UTF8&psc=1 )**_

**Abstract Factory Pattern.cpp**
```c++
#include <iostream>
#include <memory>
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

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
Preparing New York Style Cheese Pizza
Dough: Thin Crust, Cheese: Reggiano
Bake for 25 minutes at 350
Cutting the pizza into diagonal slices
Place pizza in official PizzaStore box
Ethan ordered a New York Style Cheese Pizza

Preparing Chicago Style Cheese Pizza
Dough: Thick Crust, Cheese: Mozzarella
Bake for 25 minutes at 350
Cutting the pizza into diagonal slices
Place pizza in official PizzaStore box
Joel ordered a Chicago Style Cheese Pizza
```
