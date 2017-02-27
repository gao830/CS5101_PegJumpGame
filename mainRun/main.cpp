#include <iostream>
#include "../RandomNumberGeneratorImpl.h"
#include "../KnapsackGenerator.h"
#include "../View.h"
#include "../Controller.h"

using namespace std;

int main() {
    RandomNumberGeneratorImpl gen(rand, srand); 
    KnapsackGenerator knapsack(gen);
    View view;
    Controller controller(view, knapsack);

    controller.go();

    cout << "DONE!!!!!!" << endl;
}
