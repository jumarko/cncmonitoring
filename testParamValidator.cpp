#include <gtest/gtest.h>
#include "OperatingDurationMonitor.h"
#include "PartDimensionMonitor.h"
#include "SelfDIagnosisMonitor.h"
#include "TemperaturMonitor.h"

#include "ParamErrorCodeValidator.h"
#include "ParamThresholdValidator.h"

#include "DiagnosisFailureAlarm.h"
#include "EnvironmentFailureAlarm.h"
#include "MechanicalFailureAlarm.h"

#include "Mediator.h"

#include "MonitorDefines.h"

TEST(TemperatureBehaviorTest, ValidInput)
{
	TemperatureMonitor temperaturMonitor;
	ParamThresholdValidator thresholdValidator;
	EnvironmentFailureAlarm envFailureAlarm;

	IMediator* temperaturMediator = new Mediator(&temperaturMonitor, &thresholdValidator, &envFailureAlarm);
	temperaturMediator->setThresholdValue(30);
	temperaturMediator->setMonitorType(en_MONITORPARAM_TEMPERATURE);

	temperaturMonitor.setMediator(temperaturMediator);
	thresholdValidator.setMediator(temperaturMediator);
	envFailureAlarm.setMediator(temperaturMediator);

	temperaturMonitor.paramValueObserverUpdate(20);
	
	ASSERT_EQ(en_VALIDATION_SUCCESS, thresholdValidator.getValidationResult());
}

TEST(TemperatureBehaviorTest, InvalidInput)
{
	TemperatureMonitor temperaturMonitor;
	ParamThresholdValidator thresholdValidator;
	EnvironmentFailureAlarm envFailureAlarm;

	IMediator* temperaturMediator = new Mediator(&temperaturMonitor, &thresholdValidator, &envFailureAlarm);
	temperaturMediator->setThresholdValue(30);
	temperaturMediator->setMonitorType(en_MONITORPARAM_TEMPERATURE);

	temperaturMonitor.setMediator(temperaturMediator);
	thresholdValidator.setMediator(temperaturMediator);
	envFailureAlarm.setMediator(temperaturMediator);

	temperaturMonitor.paramValueObserverUpdate(35);
	
	ASSERT_EQ(en_VALIDATION_FAILED, thresholdValidator.getValidationResult());
}

TEST(OperatingDurationValidator, ValidInput)
{
	OperatingDurationMonitor operatingDurationMonitor;
	ParamThresholdValidator thresholdValidator;
	MechanicalFailureAlarm mechFailureAlarm;

	IMediator* durationMediator = new Mediator(&operatingDurationMonitor, &thresholdValidator, &mechFailureAlarm);
	durationMediator->setThresholdValue(360);
	durationMediator->setMonitorType(en_MONITORPARAM_DURATION);

	operatingDurationMonitor.setMediator(durationMediator);
	thresholdValidator.setMediator(durationMediator);
	mechFailureAlarm.setMediator(durationMediator);

	operatingDurationMonitor.paramValueObserverUpdate(300);
	
	ASSERT_EQ(en_VALIDATION_SUCCESS, thresholdValidator.getValidationResult());
}

TEST(OperatingDurationValidator, InvalidInput)
{
	OperatingDurationMonitor operatingDurationMonitor;
	ParamThresholdValidator thresholdValidator;
	MechanicalFailureAlarm mechFailureAlarm;

	IMediator* durationMediator = new Mediator(&operatingDurationMonitor, &thresholdValidator, &mechFailureAlarm);
	durationMediator->setThresholdValue(360);
	durationMediator->setMonitorType(en_MONITORPARAM_DURATION);

	operatingDurationMonitor.setMediator(durationMediator);
	thresholdValidator.setMediator(durationMediator);
	mechFailureAlarm.setMediator(durationMediator);

	operatingDurationMonitor.paramValueObserverUpdate(300);
	
	ASSERT_EQ(en_VALIDATION_FAILED, thresholdValidator.getValidationResult());
}
TEST(SelfDiagnosisValidator, ValidInput)
{
	SelfDiagnosisMonitor selfDiagnosisMonitor;
	ParamErrorCodeValidator errorCodeValidator;
	DiagnosisFailureAlarm diagFailureAlarm;

	IMediator* diagnosisMediator = new Mediator(&selfDiagnosisMonitor, &errorCodeValidator, &diagFailureAlarm);
	diagnosisMediator->setThresholdValue(0xFF);
	diagnosisMediator->setMonitorType(en_MONITORPARAM_SELF_DIAGNOSIS);

	selfDiagnosisMonitor.setMediator(durationMediator);
	errorCodeValidator.setMediator(durationMediator);
	diagFailureAlarm.setMediator(durationMediator);

	selfDiagnosisMonitor.paramValueObserverUpdate(0xFF);
	
	ASSERT_EQ(en_VALIDATION_SUCCESS, errorCodeValidator.getValidationResult());
}

TEST(SelfDiagnosisValidator, InvalidInput)
{
	SelfDiagnosisMonitor selfDiagnosisMonitor;
	ParamErrorCodeValidator errorCodeValidator;
	DiagnosisFailureAlarm diagFailureAlarm;

	IMediator* diagnosisMediator = new Mediator(&selfDiagnosisMonitor, &errorCodeValidator, &diagFailureAlarm);
	diagnosisMonitor->setThresholdValue(0xFF);
	diagnosisMonitor->setMonitorType(en_MONITORPARAM_SELF_DIAGNOSIS);

	selfDiagnosisMonitor.setMediator(durationMediator);
	errorCodeValidator.setMediator(durationMediator);
	diagFailureAlarm.setMediator(durationMediator);

	selfDiagnosisMonitor.paramValueObserverUpdate(0xFF);
	
	ASSERT_EQ(en_VALIDATION_FAILED, errorCodeValidator.getValidationResult());
}
TEST(PartDimensionValidator, ValidInput)
{
	PartDimensionMonitor partDimensionMonitor;
	ParamThresholdValidator thresholdValidator;
	MechanicalFailureAlarm mechFailureAlarm;

	IMediator* partDimensionMediator = new Mediator(&partDimensionMonitor, &thresholdValidator, &mechFailureAlarm);
	partDimensionMediator->setThresholdValue(0.5);
	partDimensionMediator->setMonitorType(en_MONITORPARAM_PART_DIMENSION);

	partDimensionMonitor.setMediator(durationMediator);
	thresholdValidator.setMediator(durationMediator);
	mechFailureAlarm.setMediator(durationMediator);

	partDimensionMonitor.paramValueObserverUpdate(0.2);
	
	ASSERT_EQ(en_VALIDATION_SUCCESS, thresholdValidator.getValidationResult());
}

TEST(PartDimensionValidator, InvalidInput)
{
	PartDimensionMonitor partDimensionMonitor;
	ParamThresholdValidator thresholdValidator;
	MechanicalFailureAlarm mechFailureAlarm;

	IMediator* partDimensionMediator = new Mediator(&partDimensionMonitor, &thresholdValidator, &mechFailureAlarm);
	partDimensionMediator->setThresholdValue(0.5);
	partDimensionMediator->setMonitorType(en_MONITORPARAM_PART_DIMENSION);

	partDimensionMonitor.setMediator(durationMediator);
	thresholdValidator.setMediator(durationMediator);
	mechFailureAlarm.setMediator(durationMediator);

	partDimensionMonitor.paramValueObserverUpdate(0.8);
	
	ASSERT_EQ(en_VALIDATION_FAILED, thresholdValidator.getValidationResult());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}