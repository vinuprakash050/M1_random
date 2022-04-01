#include "unity.h"
#include "calculatorv1.h"

extern void test_calculator();

void setUp(void)
{

}
void tearDown(void)
{

}
void test_calculator()
{
    int expect_sum=0;
    int result_sum=0;
    TEST_ASSERT_EQUAL(SUCCESS,calculatorv1(0,10,'/',&result_sum));
    TEST_ASSERT_EQUAL(expect_sum,result_sum);
}
void test_calculator_overflow()
{
    int expect_sum=0;
    int result_sum=0;
    TEST_ASSERT_EQUAL(OVERFLOW,calculatorv1(INT_MAX,6,'*',&result_sum));
}
void test_calculator_underflow()
{
    int expect_sum=0;
    int result_sum=0;
    TEST_ASSERT_EQUAL(UNDERFLOW,calculatorv1(INT_MIN,1,'-',&result_sum));

}
int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_calculator);
    RUN_TEST(test_calculator_overflow);
    RUN_TEST(test_calculator_underflow);

    return (UnityEnd());
}
