#ifndef View_h
#define View_h

#include <tuple>
#include <list>
#include "View.h"

class ViewObserver {
    public:
        virtual void itemsRequested(int numItems) = 0;
};

class View {
    public:
        View();
        ViewObserver *observer;
        void PromptUser();
        void PrintItems(std::list< std::tuple<float, float> > items);

    private:
};

#endif
