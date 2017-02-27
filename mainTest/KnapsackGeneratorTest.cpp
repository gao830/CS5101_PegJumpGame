#include <iostream>
#include <unistd.h>
#include "KnapsackGeneratorTest.h"
#include "../RandomNumberGenerator.h"
#include "../KnapsackGenerator.h"

using namespace std;

class MockRandom: public RandomNumberGenerator {
    public:
        int funcCalled;
        std::array<float, 10> values;

        virtual float randomFloat() {
            return values[funcCalled++];
        }
};

void KnapsackGeneratorTest::setUp() {
}

void KnapsackGeneratorTest::tearDown() {
}

void KnapsackGeneratorTest::testThatRandomFloatIsCorrect() {
    MockRandom gen;
    gen.funcCalled = 0;
    gen.values = {0.1, 0.2};

    KnapsackGenerator testObject = KnapsackGenerator(gen);

    std::list< std::tuple<float, float> > expected ;
    expected.push_back(std::make_tuple(0.1, 0.2));

    std::list< std::tuple<float, float> > actual = testObject.getItems(1);
    CPPUNIT_ASSERT(expected == actual);
}

void KnapsackGeneratorTest::testThatMoreRandomFloatsAreCorrect() {
    MockRandom gen;
    gen.funcCalled = 0;
    gen.values = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};

    KnapsackGenerator testObject = KnapsackGenerator(gen);

    std::list< std::tuple<float, float> > expected ;
    expected.push_back(std::make_tuple(0.1, 0.2));
    expected.push_back(std::make_tuple(0.3, 0.4));
    expected.push_back(std::make_tuple(0.5, 0.6));
    expected.push_back(std::make_tuple(0.7, 0.8));
    expected.push_back(std::make_tuple(0.9, 1.0));

    std::list< std::tuple<float, float> > actual = testObject.getItems(5);

    CPPUNIT_ASSERT(expected == actual);
}
