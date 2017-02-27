#include "KnapsackGenerator.h"

KnapsackGenerator::KnapsackGenerator(RandomNumberGenerator &generator) : randomNumberGenerator(generator) {
}

std::list< std::tuple<float, float> > KnapsackGenerator::getItems(int count) {
    std::list< std::tuple<float, float> > items;

    for(int ii = 0; ii < count; ii++) {
        float v1 = randomNumberGenerator.randomFloat();
        float v2 = randomNumberGenerator.randomFloat();
        items.push_back(std::make_tuple(v1, v2));
    }

    return items;
}
