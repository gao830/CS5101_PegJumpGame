#ifndef TestRandom_h
#define TestRandom_h

#include <cppunit/extensions/HelperMacros.h>

using namespace CppUnit;

class TestRandom : public TestFixture
{
    CPPUNIT_TEST_SUITE(TestRandom);
    CPPUNIT_TEST(testThatFirstRandomNumberIsSeeded);
    CPPUNIT_TEST(testThatFirstRandomNumberIsSeededDifferently);
    CPPUNIT_TEST(testThatRandomFloatIsCorrect);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testThatFirstRandomNumberIsSeeded();
    void testThatFirstRandomNumberIsSeededDifferently();
    void testThatRandomFloatIsCorrect();

private:

};

#endif
