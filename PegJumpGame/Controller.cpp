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
    //    cout<< cumScore<<endl;
    
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
    model.createMap();
    while(input != "1" && input != "2"){
        if(regex_match(input,exitTyped)){
            exitGame();
        }
        cin>>input;
    }
    //operation
    
    if(input == "1"){
        cout<<"Auto solve"<<endl;
        view.pegJump(model.getBoard());
        model.autoSolve();
        view.pegJump(model.getBoard());
    }
    else {
        cout<<"Player play games"<<endl;
        view.pegJump(model.getBoard(), model.getScore(), cumScore);
        model.resetScore();
        string startPosition, endPosition;
        while (!regex_match(startPosition,exitTyped) && !regex_match(endPosition,exitTyped)
               && model.getScore()!=1) {
            bool judge = false;
            while(!judge){
                cout<<"Enter starting position(alphabet A to O(Uppercase)"<<endl;
                cin >> startPosition;
                if(regex_match(startPosition,exitTyped)){
                    break;
                }
                cout<<"Enter ending position(alphabet A to O(Uppercase)"<<endl;
                cin >> endPosition;
                if(regex_match(endPosition,exitTyped)){
                    break;
                }
                judge = model.makeMove(startPosition, endPosition);
                
            }
            
            view.pegJump(model.getBoard(), model.getScore(), cumScore);
        }
        input = "null";
        while(input != "1" && input != "2"){
            cout<<"Do you want to play another game?"<<endl;
            cout<<"1. Yes"<<endl;
            cout<<"2. No"<<endl;
            cin>>input;
        }
        if (input == "1"){
            
            cumScore+=model.getScore();
            go();
        }
        else{
            exitGame();
            
        }
        
    }
    
    
    
}

void Controller:: exitGame(){
    cout << "Exit" << endl;
    exit(0);
    
}





