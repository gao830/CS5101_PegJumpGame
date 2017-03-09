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
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;

    
}

void View::pegJump(char array[], int currentScore, int cumScore) {
//    char position = 'A';
    char board[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    int m = 0;
    int n = 0;
    cout<<endl<<endl;
    cout<<"Current Score: " << currentScore <<endl;
    cout << "Cumulative Score: "<< cumScore <<endl;
    cout<<endl<<endl;

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
        for(int j=0; j<6-i; j++){
            cout << "  ";
        }
        
        for (int k=0; k<i; k++){
            cout << board[n];
            cout << " ";
            n++;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}


void View::pegJump(char array[]) {
    //    char position = 'A';
    char board[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    int m = 0;
    int n = 0;
    cout<<endl<<endl;
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
        for(int j=0; j<6-i; j++){
            cout << "  ";
        }
        
        for (int k=0; k<i; k++){
            cout << board[n];
            cout << " ";
            n++;
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
