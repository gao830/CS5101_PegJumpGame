#include <iostream>
#include <regex>
#include "View.h"

using namespace std;

View::View() {
}

void View::PromptUser() {
    
    cout << "Select a game" << endl;
    cout << "1. Peg Juump Game" << endl;
    cout << "2. Blah blah blah" << endl;
    cout << "Exit: enter exit" << endl;
    
    return;
}

void View::promptForAutoSolve(){
    cout << "Do you want to auto solve the game?"<<endl;
    
}

void View::pegJump(char array[]) {
//    char position = 'A';
    int m = 0;
    cout<<endl;
    cout << endl;
    for(int i=1; i<=5; i++){
        
        cout << "  ";
        for(int j=0; j<5-i; j++){
            cout << " ";
        }
        for (int k=0; k<i; k++){
            cout << array[m];
            cout << " ";
            m++;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}






//void View::(std::list< std::tuple<float, float> > items) {
//    for (std::list< std::tuple<float, float> >::const_iterator iterator = items.begin(), end = items.end(); iterator != end; ++iterator) {
//        std::cout << endl << std::get<0>(*iterator) << "   " << std::get<1>(*iterator);
//    }
//    
//    cout << endl << endl;
//}
