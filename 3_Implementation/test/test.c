#include "length.h"
#include "temperature.h"
#include "volume.h"
#include "area.h"
#include "weight.h"
#include "time.h"
#include "toString.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

/**
 * @brief test the functions used in length.c file
 * 
 */
void test_length(void)
{
    TEST_ASSERT_EQUAL(0, length_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(4, length_unit_options("from",4,0));
    TEST_ASSERT_EQUAL(10, length_unit_options("from",10,0));

    TEST_ASSERT_EQUAL(0, convert_length(0,1,2));
    TEST_ASSERT_EQUAL(1000, convert_length(1,2,1));
    TEST_ASSERT_EQUAL(-1000, convert_length(-1,2,1));
    TEST_ASSERT_EQUAL(-0.1, convert_length(-10,3,1));

    TEST_ASSERT_EQUAL(1, standard_length_unit(1));
    TEST_ASSERT_EQUAL(0, standard_length_unit(0));
    TEST_ASSERT_EQUAL(0, standard_length_unit(10));
}

/**
 * @brief test the functions used in temperature.c file
 * 
 */
void test_temperature(void)
{
    TEST_ASSERT_EQUAL(0, length_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(2, length_unit_options("from",2,0));
    TEST_ASSERT_EQUAL(10, length_unit_options("from",10,0));

    TEST_ASSERT_EQUAL(373.15, convert_temperature(100,1,2));
    TEST_ASSERT_EQUAL(-729.67, convert_temperature(-150,2,3));
    TEST_ASSERT_EQUAL(100.02778, convert_temperature(212.05,3,1));
    TEST_ASSERT_EQUAL(-273.15, convert_temperature(0,2,1));
}

/**
 * @brief test the functions used in volume.c file
 * 
 */
void test_volume(void)
{   
    TEST_ASSERT_EQUAL(0, volume_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(4, volume_unit_options("from",4,0));
    TEST_ASSERT_EQUAL(10, volume_unit_options("from",10,0));

    TEST_ASSERT_EQUAL(0, convert_volume(0,1,2));
    TEST_ASSERT_EQUAL(1000000000, convert_volume(1,2,1));
    TEST_ASSERT_EQUAL(-7.9999915464491231, convert_volume(-1,5,7));
    TEST_ASSERT_EQUAL(0.076562459548635, convert_volume(2.45,8,6));

    TEST_ASSERT_EQUAL(0.000001, standard_volume_unit(3));
    TEST_ASSERT_EQUAL(0, standard_volume_unit(0));
    TEST_ASSERT_EQUAL(0.0009463525, standard_volume_unit(6));
}

/**
 * @brief test the functoins used in area.c file
 * 
 */
void test_area(void)
{   
    TEST_ASSERT_EQUAL(0, area_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(4, area_unit_options("from",4,0));
    TEST_ASSERT_EQUAL(10, area_unit_options("from",10,0));

    TEST_ASSERT_EQUAL(0, convert_area(0,1,2));
    TEST_ASSERT_EQUAL(1000000, convert_area(1,2,1));
    TEST_ASSERT_EQUAL(38750077.500155002, convert_area(2.5,4,8));
    TEST_ASSERT_EQUAL(0.000002508382080, convert_area(3,6,2));
    TEST_ASSERT_EQUAL(5179980.0, convert_area(2,5,1));

    TEST_ASSERT_EQUAL(0.0001, standard_area_unit(3));
    TEST_ASSERT_EQUAL(0, standard_area_unit(0));
    TEST_ASSERT_EQUAL(0.83612736, standard_area_unit(6));
}

/**
 * @brief tests the funtions used in weight.c file
 * 
 */
void test_weight(void)
{   
    TEST_ASSERT_EQUAL(0, weight_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(4, weight_unit_options("from",4,0));
    TEST_ASSERT_EQUAL(8, weight_unit_options("from",8,0));

    TEST_ASSERT_EQUAL(0, convert_weight(0,1,2));
    TEST_ASSERT_EQUAL(3.5, convert_weight(3500,1,2));
    TEST_ASSERT_EQUAL(40,convert_weight(2.5,5,6));
    TEST_ASSERT_EQUAL(50, convert_weight(0.25,7,3));
    TEST_ASSERT_EQUAL(907.183999999999970, convert_weight(2,5,1));

    TEST_ASSERT_EQUAL(1000, standard_weight_unit(4));
    TEST_ASSERT_EQUAL(0, standard_weight_unit(0));
    TEST_ASSERT_EQUAL(0.0283495, standard_weight_unit(6));
}

/**
 * @brief tests the functions used in time.c file
 * 
 */
void test_time(void)
{
    TEST_ASSERT_EQUAL(0, time_unit_options("from",0,0));
    TEST_ASSERT_EQUAL(4, time_unit_options("from",4,0));
    TEST_ASSERT_EQUAL(10, time_unit_options("from",10,0));

    TEST_ASSERT_EQUAL(0, convert_time(0,1,2));
    TEST_ASSERT_EQUAL(0.001000001998000, convert_time(1,2,1));
    TEST_ASSERT_EQUAL(13104, convert_time(1.3,7,4));
    TEST_ASSERT_EQUAL(7889399.984221200500000, convert_time(0.25,9,1));
    TEST_ASSERT_EQUAL(0.000000000003803, convert_time(10,3,8));

    TEST_ASSERT_EQUAL(0.0166666667, standard_time_unit(1));
    TEST_ASSERT_EQUAL(1440, standard_time_unit(6));
    TEST_ASSERT_EQUAL(0, standard_time_unit(10));
}

void test_toString(void)
{
    TEST_ASSERT_EQUAL("Wrong Unit", lengthTypeFromIntToString(0));
    TEST_ASSERT_EQUAL("Mile(s)", lengthTypeFromIntToString(7));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_length);
    RUN_TEST(test_temperature);
    RUN_TEST(test_volume);
    RUN_TEST(test_area);
    RUN_TEST(test_weight);
    RUN_TEST(test_time);
    //RUN_TEST(test_toString);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}