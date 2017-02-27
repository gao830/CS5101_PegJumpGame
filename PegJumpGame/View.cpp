#include <iostream>
#include "View.h"

using namespace std;

View::View() {
}

void View::PromptUser() {
    int numItems = 0;
    cout << "Enter number of items:";

    cin >> numItems;
    observer->itemsRequested(numItems);
}

void View::PrintItems(std::list< std::tuple<float, float> > items) {
    for (std::list< std::tuple<float, float> >::const_iterator iterator = items.begin(), end = items.end(); iterator != end; ++iterator) {
        std::cout << endl << std::get<0>(*iterator) << "   " << std::get<1>(*iterator);
    }

    cout << endl << endl;
}
