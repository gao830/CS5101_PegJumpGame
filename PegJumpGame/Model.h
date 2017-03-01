#ifndef Model_h
#define Model_h

#include <iostream>
#include <map>

class Model {
    public:
        bool checkMove(int startPosition, int endPosition);
        string makeMove(int startPosition, int endPosition, string board);



    private:
       std::map<std::pair<int,int>, int> moveMap;
       moveMap[std::make_pair(1,4)] = 2;
       moveMap[std::make_pair(4,1)] = 2;
       moveMap[std::make_pair(1,6)] = 3;
       moveMap[std::make_pair(6,1)] = 3;
       moveMap[std::make_pair(2,7)] = 4;
       moveMap[std::make_pair(7,2)] = 4;
       moveMap[std::make_pair(2,9)] = 5;
       moveMap[std::make_pair(9,2)] = 5;
       moveMap[std::make_pair(3,8)] = 5;
       moveMap[std::make_pair(8,3)] = 5;
       moveMap[std::make_pair(3,10)] = 6;
       moveMap[std::make_pair(3,10)] = 6;
       moveMap[std::make_pair(4,6)] = 5;
       moveMap[std::make_pair(6,4)] = 5;
       moveMap[std::make_pair(4,11)] = 7;
       moveMap[std::make_pair(11,4)] = 7;
       moveMap[std::make_pair(4,13)] = 8;
       moveMap[std::make_pair(13,4)] = 8;
       moveMap[std::make_pair(5,12)] = 8;
       moveMap[std::make_pair(12,5)] = 8;
       moveMap[std::make_pair(5,14)] = 9;
       moveMap[std::make_pair(14,5)] = 9;
       moveMap[std::make_pair(6,15)] = 10;
       moveMap[std::make_pair(15,6)] = 10;
       moveMap[std::make_pair(6,13)] = 9;
       moveMap[std::make_pair(13,6)] = 9;
       moveMap[std::make_pair(7,9)] = 8;
       moveMap[std::make_pair(9,7)] = 8;
       moveMap[std::make_pair(8,10)] = 9;
       moveMap[std::make_pair(10,8)] = 9;
       moveMap[std::make_pair(11,13)] = 12;
       moveMap[std::make_pair(11,13)] = 12;
       moveMap[std::make_pair(12,14)] = 13;
       moveMap[std::make_pair(14,12)] = 13;
       moveMap[std::make_pair(13,15)] = 14;
       moveMap[std::make_pair(15,13)] = 14;

};

#endif
