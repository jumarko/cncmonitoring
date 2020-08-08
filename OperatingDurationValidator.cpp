/*
 * OperatingDurationValidator.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include <iostream>
#include "OperatingDurationValidator.h"



OperatingDurationValidator::OperatingDurationValidator(float threshold)
{
	_thresholdOperatingDurationInMins = threshold;
	_alarm = new MechanicalFailureAlarm();
}

OperatingDurationValidator::~OperatingDurationValidator()
{
	delete _alarm;
}

bool OperatingDurationValidator::validateParameter(float currentVal)
{
	if(currentVal > _thresholdOperatingDurationInMins)
	{
		_alarm->raiseAlarm();
		return true;
	}
	else
	{
		std::cout <<"Operating Duration is within limits";
		return false;
	}
}



