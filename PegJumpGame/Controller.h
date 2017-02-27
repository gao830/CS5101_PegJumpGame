#ifndef Controller_h
#define Controller_h

#include "Controller.h"
#include "View.h"
#include "KnapsackGenerator.h"

class Controller: public ViewObserver {
    public:
        Controller(View &inView, KnapsackGenerator &inGenerator);
        void go();

        virtual void itemsRequested(int numItems);

    private:
        View &view;
        KnapsackGenerator &generator;
};

#endif
