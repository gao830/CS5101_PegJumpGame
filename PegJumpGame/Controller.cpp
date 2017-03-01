#include <iostream>
#include <regex>
#include <list>
#include "Controller.h"
using namespace std;

static regex exitTyped("(e|E)(x|X)(i|I)(t|T)");

Controller::Controller(View &view) {
    this->view = view;
}

void Controller::go() {
    string selection = "0";
    
    
    view.PromptUser();
    while (!regex_match(selection,exitTyped)) {
        cin >> selection;
        
        if(selection == "1"){
            pegJumpController(model);
            view.PromptUser();
            
        }
        
        else if(regex_match(selection,exitTyped)){
            cout << "Exit" << endl;
        }
        else{
            view.PromptUser();
        }
        
        
    }
}

void Controller::pegJumpController(Model model){
    view.pegJump(model.getBoard());
    //operation
    
    
}

