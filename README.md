# Strategy Pattern 🦆

*Also Known As (Policy)*

> Definition: Define a family of algorithms, encapsulate each one, and make them interchangable. Strategy lets the algorithm vary independently from clients that use it.



<img src="Strategy Pattern.png" title="Class Diagram Image">

_This example is inspired from the book **[Head First: Design Patterns Second Edition](https://www.amazon.com/dp/149207800X/ref=cm_sw_em_r_mt_dp_SZN9DWRD8Y55S5CZW5K5?_encoding=UTF8&psc=1 )**_

**Strategy Pattern.cpp**
```c++
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

using namespace std;

int main() {
    vector<shared_ptr<Duck>> ducks;
    shared_ptr<Duck> mallard = make_shared<MallardDuck>();
    shared_ptr<Duck> rubber = make_shared<RubberDuck>();
    shared_ptr<Duck> decoy = make_shared<DecoyDuck>();    

    ducks.push_back(mallard);
    ducks.push_back(rubber);
    ducks.push_back(decoy);

    for_each(ducks.begin(), ducks.end(), [](shared_ptr<Duck> duck) {
        duck->display();
        duck->performFly();
        duck->performQuack();
    });

    return 0;
}
```
**Console:**
```
I'm a MallardDuck.
I can fly.
Quack!
I'm a RubberDuck.
I can't fly.
Squeak!
I'm a DecoyDuck.
I can't fly.
I make no sound!
```
