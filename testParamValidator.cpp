/*#include "PartDimensionValidator.h"
#include "OperatingDurationValidator.h"
#include "SelfDiagnosisValidator.h"
#include "TemperatureValidator.h"
#include <gtest/gtest.h>

TEST(PartDimensionValidator, ValidInput)
{
	float threshold = 0.5;
	PartDimensionValidator partDimensionValidator(threshold);
	ASSERT_EQ(false, partDimensionValidator.validateParameter(0.3));
}

TEST(PartDimensionValidator, InvalidInput)
{
	float threshold = 0.5;
	PartDimensionValidator partDimensionValidator(threshold);
	ASSERT_EQ(true, partDimensionValidator.validateParameter(0.6));
}

TEST(OperatingDurationValidator, ValidInput)
{
	float threshold = 360;
	OperatingDurationValidator operationDurationValidator(threshold);
	ASSERT_EQ(false, operationDurationValidator.validateParameter(300));
}

TEST(OperatingDurationValidator, InvalidInput)
{
	float threshold = 360;
	OperatingDurationValidator operationDurationValidator(threshold);
	ASSERT_EQ(true, operationDurationValidator.validateParameter(370));
}
TEST(SelfDiagnosisValidator, ValidInput)
{
	SelfDiagnosisValidator selfDiagnosisValidator;
	ASSERT_EQ(false, selfDiagnosisValidator.validateParameter(0xFF));
}

TEST(SelfDiagnosisValidator, InvalidInput)
{
	SelfDiagnosisValidator selfDiagnosisValidator;
	ASSERT_EQ(true, selfDiagnosisValidator.validateParameter(0x00));
}
TEST(TemperatureValidator, ValidInput)
{
	float threshold = 30;
	TemperatureValidator tempValidator(threshold);
	ASSERT_EQ(false, tempValidator.validateParameter(15));
}

TEST(TemperatureValidator, InvalidInput)
{
	float threshold = 30;
	TemperatureValidator tempValidator(threshold);
	ASSERT_EQ(true, tempValidator.validateParameter(35));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/