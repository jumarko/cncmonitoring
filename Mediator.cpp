/*
 * Mediator.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */



#include "Mediator.h"

Mediator::Mediator(IMonitor* monitor, IValidator* validator, IAlarm* alarm):_monitorParam(en_MONITORPARAM_MAX), _validationResult(en_VALIDATION_MAX)
{
	_monitor = monitor;
	_validator = validator;
	_alarm = alarm;
	_thresholdValue = 0;
}

Mediator::Mediator(const Mediator& obj)
{
    _monitor = obj._monitor;
	_validator = obj._validator;
	_alarm = obj._alarm;
	_thresholdValue = 0;
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
