#ifndef Model_h
#define Model_h

#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;



class Model {
<<<<<<< HEAD
    public:
        bool checkMove(int startPosition, int endPosition);
        void makeMove(int startPosition, int endPosition);
        void createMap();


    private:
        std::map<pair<int,int>, int> moveMap;
        char board[15] = {'0','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
        int score = 14;
        int cumScore = 0;
=======
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
    
>>>>>>> e4e5187d5002be0cd5e2b40f6dee6923d1c34a0e
    
private:
    std::map<pair<int,int>, int> moveMap;
    char board[15] = {'0','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    int score = 14;
    int cumScore;
};

#endif
