/*
 * TemperaturValidator.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */
#include <iostream>
#include "TemperatureValidator.h"



TemperatureValidator::TemperatureValidator(float threshold)
{
	_thresholdTemp = threshold;
	_alarm = new EnvironmentFailureAlarm();
}

TemperatureValidator::~TemperatureValidator()
{
	delete _alarm;
}

bool TemperatureValidator::validateParameter(float currentVal)
{
	if(currentVal > _thresholdTemp)
	{
		_alarm->raiseAlarm();
		return true;
	}
	else
	{
		std::cout <<"Temperature is normal";
		return false;
	}
}
