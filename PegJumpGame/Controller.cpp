#include <iostream>
#include <regex>
#include <tuple>
#include <list>
#include "Controller.h"
using namespace std;

Controller::Controller(View &inView, KnapsackGenerator &inGenerator): view(inView), generator(inGenerator) {
    view.observer = this; 
}

void Controller::go() {
    string selection = "0";
    regex exit("(e|E)(x|X)(i|I)(t|T)");
    
    view.PromptUser();
    
    cin >> selection;
    
    if(selection == "1"){
        pegJumpController(arrayOfElements);
//        PromptUser();
        
    }
    
    else if(regex_match(selection,exit)){
        cout << "Exit" << endl;
    }
    else{
        view.PromptUser();
    }

}

void Controller::pegJumpController(char array[]){
    view.pegJump(array);
}


// View Observer
void Controller::itemsRequested(int numItems) {
    std::list< std::tuple<float, float> > items = generator.getItems(numItems);
//    view.PrintItems(items);
}
