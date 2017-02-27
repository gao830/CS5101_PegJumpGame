#include <tuple>
#include <list>
#include "Controller.h"

Controller::Controller(View &inView, KnapsackGenerator &inGenerator): view(inView), generator(inGenerator) {
    view.observer = this; 
}

void Controller::go() {
    view.PromptUser();
}

// View Observer
void Controller::itemsRequested(int numItems) {
    std::list< std::tuple<float, float> > items = generator.getItems(numItems);
    view.PrintItems(items);
}
