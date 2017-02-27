#ifndef KnapsackGenerator_h
#define KnapsackGenerator_h

#include <tuple>
#include <list>
#include "KnapsackGenerator.h"
#include "RandomNumberGenerator.h"

class KnapsackGenerator {
    public:
        KnapsackGenerator(RandomNumberGenerator &generator);
        std::list< std::tuple<float, float> > getItems(int count);

    private:
        RandomNumberGenerator &randomNumberGenerator;
        int ii;
};

#endif
