//
//  CS5101 Assignment 3
//  PegJumpGame
//
#include <iostream>
#include <regex>
#include <map>
#include <algorithm>
#include <iterator>
#include "RandomNumberGeneratorImpl.h"
#include "View.h"
#include "Controller.h"

using namespace std;

void playGames();
void pegJump();

int main(int argc, const char * argv[]) {
    
    View view;
    Controller controller(view);
    
    controller.go();
    
    cout << endl;
    return 0;
}



