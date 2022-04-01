#include "unity.h"
#include "votev1.h"

extern void test_vote();

void setUp(void)
{

}
void tearDown(void)
{

}
void test_vote()
{
    TEST_ASSERT_EQUAL(SUCCESS,votev1(2));
}
void test_out_of_choice()
{
    TEST_ASSERT_EQUAL(out_of_choice,votev1(6));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_vote);
    RUN_TEST(test_out_of_choice);

    return (UnityEnd());
}
