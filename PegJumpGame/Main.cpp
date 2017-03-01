//
//  CS5101 Assignment 3
//  PegJumpGame
//
#include <iostream>
#include <regex>
#include <map>
#include "RandomNumberGeneratorImpl.h"
#include "View.h"
#include "Controller.h"

using namespace std;

void playGames();
void pegJump();

int main(int argc, const char * argv[]) {
    
    RandomNumberGeneratorImpl gen(rand, srand);
    map<char,int> mymap;
    
    // first insert function version (single parameter):
    mymap.insert ( std::pair<char,int>('a',100) );
    View view;
    Controller controller(view);
    
    controller.go();
    
//    cout << "DONE!!!!!!" << endl;
    
//    playGames();
//    
//    cout << endl;
    return 0;
}



