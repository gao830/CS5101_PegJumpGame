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
            exitGame();
        }
        else{
            view.PromptUser();
        }
        
        
    }
}

void Controller::pegJumpController(Model model){
        view.promptForAutoSolve();
    string input = "null";
    while(input != "1" && input != "2"){
        if(regex_match(input,exitTyped)){
            exitGame();
        }
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl;
        cin>>input;
    }
    //operation
    
    if(input == "1"){
        cout<<"Auto solve"<<endl;
        view.pegJump(model.getBoard());
        model.autoSolve();
        view.pegJump(model.getBoard());
    }
    
    
    
}

void Controller:: exitGame(){
    cout << "Exit" << endl;
    exit(0);
    
}





