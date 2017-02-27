//
//  CS5101 Assignment 3
//  PegJumpGame
//
#include <iostream>
#include <regex>
#include "RandomNumberGeneratorImpl.h"
#include "KnapsackGenerator.h"
#include "View.h"
#include "Controller.h"
using namespace std;

void playGames();
void pegJump();

int main(int argc, const char * argv[]) {
    
    RandomNumberGeneratorImpl gen(rand, srand);
    KnapsackGenerator knapsack(gen);
    View view;
    Controller controller(view, knapsack);
    
    controller.go();
    
//    cout << "DONE!!!!!!" << endl;
    
//    playGames();
//    
//    cout << endl;
    return 0;
}



