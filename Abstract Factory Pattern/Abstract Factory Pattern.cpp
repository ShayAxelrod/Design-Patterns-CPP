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
