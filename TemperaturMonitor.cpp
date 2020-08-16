/*
 * TemperaturMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include "TemperaturMonitor.h"

TemperatureMonitor::TemperatureMonitor()
{
	_mediator = 0;
	_temperatureValue = 0;
}

TemperatureMonitor::~TemperatureMonitor()
{

}

void TemperatureMonitor::onTemperatureValueUpdate(float temperature)
{
	_temperatureValue = temperature;
	_mediator->validateParameter();
}

float TemperatureMonitor::getCurrentParamValue()
{
	return _temperatureValue;
}

void TemperatureMonitor::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void TemperatureMonitor::paramValueObserverUpdate(float val)
{
	onTemperatureValueUpdate(val);
}
