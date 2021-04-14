// #include"../inc/bmi_bmr_fatPercent.h"
// #include "../unity/unity.h"
// #include "../unity/unity_internals.h"
#include<stdio.h>
#include "../inc/bmi_bmr_fatPercent.h"
#include "../unity/unity.h"
// #include "unity_internals.h"


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
       
void test_bmr(void){

    float weight = 100;
    float height = 5;
    
    TEST_ASSERT_EQUAL( 4.000000,bmi(&weight, &height));
}
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_bmr);   
return UNITY_END();
}
