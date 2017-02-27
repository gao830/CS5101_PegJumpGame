//
//  CS5101 Assignment 3
//  PegJumpGame
//
#include <iostream>
using namespace std;

void playGames();
void pegJump();

int main(int argc, const char * argv[]) {
    pegJump();
    cout << endl;
    return 0;
}

void playGames(){
    cout << "Select a game" << endl;
    cout << "1. Peg Juump Game" << endl;
    cout << "2. Blah blah blah" << endl;
    
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
















