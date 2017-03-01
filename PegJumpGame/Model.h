#ifndef Model_h
#define Model_h

#include <iostream>
#include <map>
using namespace std;



class Model {
public:
    bool checkMove(int startPosition, int endPosition);
    void makeMove(int startPosition, int endPosition);
    void createMap();
    char* getBoard();
    int getScore();
    void updateScore();
    void resetScore();
    int getCumScore();
    void updateCumScore();
    void autoSolve();
    
    
private:
    std::map<pair<int,int>, int> moveMap;
    char board[15] = {'0','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    int score = 14;
    int cumScore;
};

#endif
