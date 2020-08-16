/*
 * Monitoring.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */




#include "Monitor/OperatingDurationMonitor.h"
#include "Monitor/PartDimensionMonitor.h"
#include "Monitor/SelfDIagnosisMonitor.h"
#include "Monitor/TemperaturMonitor.h"

#include "Validator/ParamErrorCodeValidator.h"
#include "Validator/ParamThresholdValidator.h"

#include "Alarm/DiagnosisFailureAlarm.h"
#include "Alarm/EnvironmentFailureAlarm.h"
#include "Alarm/MechanicalFailureAlarm.h"

#include "Mediator.h"

#include "MonitorDefines.h"

int main()
{

/*	IMonitor* temperaturMonitor = new TemperatureMonitor();
	IMonitor* operatingDurationMonitor = new OperatingDurationMonitor();
	IMonitor* partDimensionMonitor = new PartDimensionMonitor();
	IMonitor* selfDiagnosisMonitor = new SelfDiagnosisMonitor();

	IValidator* errorCodeValidator = new ParamErrorCodeValidator();
	IValidator* thresholdValidator = new ParamThresholdValidator();

	IAlarm* diagFailureAlarm = new DiagnosisFailureAlarm();
	IAlarm* envFailureAlarm = new EnvironmentFailureAlarm();
	IAlarm* mechFailureAlarm = new MechanicalFailureAlarm();*/

	TemperatureMonitor temperaturMonitor;
	OperatingDurationMonitor operatingDurationMonitor;
	PartDimensionMonitor partDimensionMonitor;
	SelfDiagnosisMonitor selfDiagnosisMonitor;

	ParamErrorCodeValidator errorCodeValidator;
	ParamThresholdValidator thresholdValidator;

	DiagnosisFailureAlarm diagFailureAlarm;
	EnvironmentFailureAlarm envFailureAlarm;
	MechanicalFailureAlarm mechFailureAlarm;


	IMediator* temperaturMediator = new Mediator(&temperaturMonitor, &thresholdValidator, &mechFailureAlarm);
	temperaturMediator->setThresholdValue(30);
	temperaturMediator->setMonitorType(en_MONITORPARAM_TEMPERATURE);

	temperaturMonitor.setMediator(temperaturMediator);
	thresholdValidator.setMediator(temperaturMediator);
	mechFailureAlarm.setMediator(temperaturMediator);


	temperaturMonitor.paramValueObserverUpdate(35);
	temperaturMonitor.paramValueObserverUpdate(20);




	return 0;
}
