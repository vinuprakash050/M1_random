#include "unity.h"
#include "unit_convertorv1.h"

extern void test_unit_convertor();

void setUp(void)
{

}
void tearDown(void)
{

}
void test_unit_convertor()
{
    TEST_ASSERT_EQUAL(SUCCESS,unit_convertorv1(1));
}
void test_unit_convertor_unknown()
{
    TEST_ASSERT_EQUAL(unknown_input,unit_convertorv1(4));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_unit_convertor);
    RUN_TEST(test_unit_convertor_unknown);

    return (UnityEnd());
}
