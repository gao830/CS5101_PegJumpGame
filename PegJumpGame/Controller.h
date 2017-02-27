#ifndef Controller_h
#define Controller_h

#include "Controller.h"
#include "View.h"
#include "KnapsackGenerator.h"

class Controller: public ViewObserver {
    public:
        Controller(View &inView, KnapsackGenerator &inGenerator);
        void go();
        void pegJumpController(char array[]);
        virtual void itemsRequested(int numItems);
        char arrayOfElements[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    private:
        View &view;
        KnapsackGenerator &generator;
    
};

#endif
