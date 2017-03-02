#ifndef Model_h
#define Model_h

#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;



class Model {
public:
    bool checkMove(int startPosition, int endPosition);
    void makeMove(int startPosition, int endPosition);
    bool makeMove(string startPosition, string endPosition);
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
    char board[15] = {'0','1','1','1','1','1','1','1','1','1','1','1','1','1','1'};
    int score = 14;
    int cumScore = 0;
};

#endif
