#include <iostream>
#include <unistd.h>
#include "PegJumpTest.h"
#include "Model.h"

using namespace std;


void PegJumpTest::setUp() {
}

void PegJumpTest::tearDown() {
}

void PegJumpTest::testThatPegJumpWorks() {
    Model model;
    model.createMap();
	bool ans = model.checkMove(1,4);
    CPPUNIT_ASSERT(ans);
}

