#include "unity.h"
#include "unity_internals.h"
#include "array_of_structures.h"
#include <string.h>

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_empty(void)
{
    TEST_ASSERT_EQUAL(1,read_file());
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_empty);
    return UNITY_END();
}