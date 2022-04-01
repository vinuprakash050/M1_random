#include "unity.h"
#include "stopwatchv1.h"

extern void test_stopwatch();

void setUp(void)
{

}
void tearDown(void)
{

}
void test_stopwatch()
{

    TEST_ASSERT_EQUAL(SUCCESS,stopwatchv1(0,1,1));
}
void test_calculator_secondexceed()
{
    TEST_ASSERT_EQUAL(seconds_exceed_60,stopwatchv1(2,60,65));
}
void test_calculator_minuteexceed()
{
    TEST_ASSERT_EQUAL(minutes_exceed_60,stopwatchv1(1,65,25));

}
void test_calculator_isnegative()
{
    TEST_ASSERT_EQUAL(isnegative,stopwatchv1(1,65,25));

}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_stopwatch);
    RUN_TEST(test_calculator_secondexceed);
    RUN_TEST(test_calculator_minuteexceed);
    RUN_TEST(test_calculator_isnegative);

    return (UnityEnd());
}
