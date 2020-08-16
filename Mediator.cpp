/*
 * Mediator.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */



#include "Mediator.h"

Mediator::Mediator(IMonitor* monitor, IValidator* validator, IAlarm* alarm):_monitor(monitor),
_validator(validator), _alarm(alarm), _thresholdValue(0), _monitorParam(en_MONITORPARAM_MAX), _validationResult(en_VALIDATION_MAX)
{
}

Mediator::Mediator(const Mediator& obj)
{

}

Mediator::~Mediator()
{

}

float Mediator::getCurrentParamValue()
{
	return _monitor->getCurrentParamValue();
}

void Mediator::setThresholdValue(float threshold)
{
	_thresholdValue = threshold;
}

float Mediator::getThresholdValue()
{
	return _thresholdValue;
}

void Mediator::triggerAlarm()
{
	_alarm->raiseAlarm(_validator->getValidationResult());
}

void Mediator::validateParameter()
{
	_validator->validateParameter(_monitor->getCurrentParamValue());
}

void Mediator::setMonitorType(enMonitorParams monitorParam)
{
	_monitorParam = monitorParam;
}

enMonitorParams Mediator::getMonitorType()
{
	return _monitorParam;
}
