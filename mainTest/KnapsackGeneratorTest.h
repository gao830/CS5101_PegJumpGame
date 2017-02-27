#ifndef KnapsackGeneratorTest_h
#define KnapsackGeneratorTest_h

#include <cppunit/extensions/HelperMacros.h>

using namespace CppUnit;

class KnapsackGeneratorTest : public TestFixture
{
    CPPUNIT_TEST_SUITE(KnapsackGeneratorTest);
    CPPUNIT_TEST(testThatRandomFloatIsCorrect);
    CPPUNIT_TEST(testThatMoreRandomFloatsAreCorrect);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testThatGetItemsUsed();
    void testThatRandomFloatIsCorrect();
    void testThatMoreRandomFloatsAreCorrect();

private:

};

#endif
