/*
 * TemperaturMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include "TemperaturMonitor.h"

TemperatureMonitor::TemperatureMonitor(float threshold)
{
	_validator = new TemperatureValidator(threshold);
}

TemperatureMonitor::~TemperatureMonitor()
{
	delete _validator;
}

void TemperatureMonitor::onTemperatureValueUpdate(float temperature)
{
	_temperatureValue = temperature;
	_validator->validateParameter(_temperatureValue);
}