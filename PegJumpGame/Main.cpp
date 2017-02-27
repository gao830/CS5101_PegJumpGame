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
    
    cout << "DONE!!!!!!" << endl;
    
//    playGames();
//    
//    cout << endl;
    return 0;
}

void playGames(){
    string selection = "0";
    regex exit("(e|E)(x|X)(i|I)(t|T)");
    while(selection == "0") {
        cout << "Select a game" << endl;
        cout << "1. Peg Juump Game" << endl;
        cout << "2. Blah blah blah" << endl;
        cout << "Exit: enter exit" << endl;
        cin >> selection;
    }
    
    if(selection == "1"){
        pegJump();
        playGames();
    }
    
    else if(regex_match(selection,exit)){
        cout << "Exit";
    }
    else{
        playGames();
    }
    return;
    
}

void pegJump() {
    char position = 'A';
    for(int i=1; i<=5; i++){
        for(int j=0; j<5-i; j++){
            cout << " ";
        }
        for (int k=0; k<i; k++){
            cout << position;
            cout << " ";
            position++;
        }
        cout << endl;
    }
}
















