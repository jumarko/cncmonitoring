#include "PartDimensionValidator.h"
#include <gtest/gtest.h>

TEST(PartDimensionValidator, ValidInput)
{
	float threshold = 0.5;
	PartDimensionValidator(threshold);
	ASSERT_EQ(false, validateParameter(0.3));
}

TEST(PartDimensionValidator, InvalidInput)
{
	float threshold = 0.5;
	PartDimensionValidator partDimensionValidator(threshold);
	ASSERT_EQ(true, partDimensionValidator.validateParameter(0.6));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}