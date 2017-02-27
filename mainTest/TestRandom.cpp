#include <iostream>
#include <unistd.h>
#include "TestRandom.h"
#include "../RandomNumberGeneratorImpl.h"

using namespace std;

void TestRandom::setUp() {
}

void TestRandom::tearDown() {
}

void TestRandom::testThatFirstRandomNumberIsSeeded() {
    unsigned int seed1 = 0;

    RandomNumberGeneratorImpl testObject1 = RandomNumberGeneratorImpl(rand, [&](unsigned int s) {seed1 = s;});

    CPPUNIT_ASSERT(seed1 != 0);
}

void TestRandom::testThatFirstRandomNumberIsSeededDifferently() {
    unsigned int seed1 = 0;
    unsigned int seed2 = 0;

    RandomNumberGeneratorImpl testObject1 = RandomNumberGeneratorImpl(rand, [&](unsigned int s) {seed1 = s;});
    sleep(1);
    RandomNumberGeneratorImpl testObject2 = RandomNumberGeneratorImpl(rand, [&](unsigned int s) {seed2 = s;});

    CPPUNIT_ASSERT(seed1 != 0);
    CPPUNIT_ASSERT(seed2 != 0);
    CPPUNIT_ASSERT(seed1 != seed2);
}

void TestRandom::testThatRandomFloatIsCorrect() {
    int numToReturn = -2;
    RandomNumberGeneratorImpl testObject = RandomNumberGeneratorImpl([&]() -> unsigned int {return numToReturn++; }, srand);

    float firstExpected = 1.0 / -2.0;
    float firstActual = testObject.randomFloat();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(firstExpected, firstActual, 0.01);

    float secondExpected = 1.0 / -1.0;
    float secondActual = testObject.randomFloat();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(secondExpected, secondActual, 0.01);

    float thirdExpected = 1.0 / 1.0;
    float thirdActual = testObject.randomFloat();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(thirdExpected, thirdActual, 0.01);

    float fourthExpected = 1.0 / 1.0;
    float fourthActual = testObject.randomFloat();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(fourthExpected, fourthActual, 0.01);

    float fifthExpected = 1.0 / 2.0;
    float fifthActual = testObject.randomFloat();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(fifthExpected, fifthActual, 0.01);
}
