#include<stdio.h>
#include "../inc/bmi_bmr_fatPercent.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
       
void test_bmi(void){

    float weight = 65;
    float height = 1.8;
    
    TEST_ASSERT_EQUAL(20.061729,bmi(&weight, &height));

    float weight1 = 56;
    float height1 = 1.65;
    
    TEST_ASSERT_EQUAL(20.569330,bmi(&weight1, &height1));

    float weight2 = 80;
    float height2 = 1.8;
    
    TEST_ASSERT_EQUAL(24.691359,bmi(&weight2, &height2));

    float weight3 = 35;
    float height3 = 1.2;
    
    TEST_ASSERT_EQUAL(24.305553,bmi(&weight3, &height3));

    float weight4 = 70;
    float height4 = 1.8;
    
    TEST_ASSERT_EQUAL(21.604939,bmi(&weight4, &height4));   

}

void test_bmr(void){

    float weight5 = 65;
    float height5 = 1.8;
    int age = 22;
    char gender = 'M';
    
    TEST_ASSERT_EQUAL(1710.150024,bmr(&weight5, &height5, &age, &gender));

    float weight6 = 56;
    float height6 = 1.65;
    int age1 = 25;
    char gender1 = 'F';
    
    TEST_ASSERT_EQUAL(1076.780518,bmr(&weight6, &height6, &age1, &gender1));

    float weight7 = 80;
    float height7 = 1.8;
    int age2 = 40;
    char gender2 = 'M';
    
    TEST_ASSERT_EQUAL(1794.000000,bmr(&weight7, &height7, &age2, &gender2));

    float weight8 = 35;
    float height8 = 1.2;
    int age3 = 6;
    char gender3 = 'F';
    
    TEST_ASSERT_EQUAL(963.968994,bmr(&weight8, &height8, &age3, &gender3));

    float weight9 = 70;
    float height9 = 1.8;
    int age4 = 25;
    char gender4 = 'M';
    
    TEST_ASSERT_EQUAL(1758.500000,bmr(&weight9, &height9, &age4, &gender4));
}

void test_fat_percent(void){

    float weight10 = 65;
    float height10 = 1.8;
    int age5 = 22;
    char gender5 = 'M';
    
    TEST_ASSERT_EQUAL(12.000000,fat_percent(&age5, &weight10, &height10,&gender5));

    float weight11 = 56;
    float height11 = 1.65;
    int age6 = 25;
    char gender6 = 'F';
    
    TEST_ASSERT_EQUAL(25.0,fat_percent(&age6, &weight11, &height11,&gender6));

    float weight12 = 80;
    float height12 = 1.8;
    int age7 = 40;
    char gender7 = 'M';
    
    TEST_ASSERT_EQUAL(22.629631,fat_percent(&age7, &weight12, &height12,&gender7));

    float weight13 = 35;
    float height13 = 1.2;
    int age8 = 6;
    char gender8 = 'F';
    
    TEST_ASSERT_EQUAL(25.146664,fat_percent(&age8, &weight13, &height13,&gender8));

    float weight14 = 70;
    float height14 = 1.8;
    int age9 = 25;
    char gender9 = 'M';
    
    TEST_ASSERT_EQUAL(15.475926,fat_percent(&age9, &weight14, &height14, &gender9));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_bmi); 
RUN_TEST(test_bmr);
RUN_TEST(test_fat_percent);
return UNITY_END();
}
