#include <iostream>
#include <unistd.h>
#include "PegJumpTest.h"
#include "../Model.h"

using namespace std;


void KnapsackGeneratorTest::setUp() {
}

void KnapsackGeneratorTest::tearDown() {
}

void KnapsackGeneratorTest::testThatPegJumpWorks() {
    Model model;
    CPPUNIT_ASSERT(model.makeMove('A', 'B'));
}

