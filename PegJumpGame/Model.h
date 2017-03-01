#ifndef Model_h
#define Model_h

#include <iostream>
#include <map>
using namespace std;



class Model {
    public:
        bool checkMove(int startPosition, int endPosition);
        string makeMove(int startPosition, int endPosition, string board);
        void createMap();


    private:
        std::map<pair<int,int>, int> moveMap;
        
};

#endif
