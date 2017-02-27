#include <chrono>
#include <iostream>
#include "RandomNumberGeneratorImpl.h"

using namespace std;

RandomNumberGeneratorImpl::RandomNumberGeneratorImpl(std::function<int(void)> rndm, 
        std::function<void(unsigned int)> seed) :random(rndm) {
    auto now = std::chrono::high_resolution_clock::now();
    unsigned int timeMillis = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();

    seed(timeMillis);
}


float RandomNumberGeneratorImpl::randomFloat() { 
    int denominator = random() % 10000;
    if(denominator == 0) {
        denominator++;
    }
    float val = 1.0 / denominator;
    return val;
}
