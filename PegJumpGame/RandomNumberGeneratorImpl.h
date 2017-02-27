#ifndef RandomNumberGeneratorImpl_h
#define RandomNumberGeneratorImpl_h

#include <functional>
#include "RandomNumberGenerator.h"

class RandomNumberGeneratorImpl: public RandomNumberGenerator {
    private:
        std::function<int(void)> random;
        
    public:
        RandomNumberGeneratorImpl(std::function<int(void)> rndm, std::function<void(unsigned int)> seed);
        virtual float randomFloat();
};

#endif
