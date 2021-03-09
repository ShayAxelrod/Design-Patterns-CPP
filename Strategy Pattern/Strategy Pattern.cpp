#include <iostream>
#include <memory>
#include <vector>
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

    for (auto duck : ducks) {
        duck->display();
        duck->performFly();
        duck->performQuack();
    }

    return 0;
}