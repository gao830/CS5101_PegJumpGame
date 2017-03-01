#ifndef Controller_h
#define Controller_h

#include "Controller.h"
#include "View.h"
#include "Model.h"

class Controller {
public:
    Controller(View &inView);
    void go();
    void pegJumpController(Model model);
    void exitGame();
    char arrayOfElements[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
private:
    View view;
    Model model;
    
    //        KnapsackGenerator &generator;
    
};

#endif
