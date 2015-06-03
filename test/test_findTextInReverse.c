#include "unity.h"
#include "findTextInReverse.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_findTextInReverse_given_I_find_I_should_return_0()
{
	TEST_ASSERT_EQUAL(0, findTextInReverse("I", "I"));
}

void test_findTextInReverse_given_HATE_find_A_should_return_1()
{
	TEST_ASSERT_EQUAL(1, findTextInReverse("HATE", "A"));
}

void test_findTextInReverse_given_ASSIGNMENT_find_D_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("ASSIGNMENT", "D"));
}

void test_findTextInReverse_given_ANYWAY_find_YW_should_return_2()
{
	TEST_ASSERT_EQUAL(2, findTextInReverse("ANYWAY", "YW"));
}

void test_findTextInReverse_given_IHAVE_find_NO_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("IHAVE", "NO"));
}

void test_findTextInReverse_given_TOFINISHIT_find_NI_should_return_4()
{
	TEST_ASSERT_EQUAL(4, findTextInReverse("TOFINISHIT", "NI"));
}

void test_findTextInReverse_given_OMGGGOG_find_MG_should_return_1()
{
	TEST_ASSERT_EQUAL(1, findTextInReverse("OMGGGOG", "MG"));
}

void test_findTextInReverse_given_DRPOH_find_POH_should_return_2()
{
	TEST_ASSERT_EQUAL(2, findTextInReverse("DRPOH", "POH"));
}

void test_findTextInReverse_given_DR_POH_find_DR_should_return_0()
{
	TEST_ASSERT_EQUAL(0, findTextInReverse("DR POH", "DR"));
}

void test_findTextInReverse_given_empty_string_find_DR_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("", "DR"));
}

void test_findTextInReverse_given_DR_find_empty_string_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("DR", ""));
}

void test_findTextInReverse_given_empty_string_find_empty_string_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("", ""));
}

void test_findTextInReverse_given_POH_find_POHTV_should_return_minus_2()
{
	TEST_ASSERT_EQUAL(-2, findTextInReverse("POH", "POHTV"));
}

void test_findTextInReverse_given_DR_POHOP_OROD_find_OP_should_return_5()
{
	TEST_ASSERT_EQUAL(5, findTextInReverse("DR POHOP OROD", "HOP"));
}

void test_findTextInReverse_given_DRPOH_TV_find_POH_TV_should_return_2()
{
	TEST_ASSERT_EQUAL(2, findTextInReverse("DRPOH TV", "POH TV"));
}

void test_findTextInReverse_given_RRARARATA_find_POH_RRARA_should_return_0()
{
	TEST_ASSERT_EQUAL(0, findTextInReverse("RRARARATA", "RRARA"));
}