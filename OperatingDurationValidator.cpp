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

}

void OperatingDurationValidator::validateParameter(float currentVal)
{
	if(currentVal > _thresholdOperatingDurationInMins)
	{
		_alarm->raiseAlarm();
	}
	else
	{
		std::cout <<"Operating Duration is within limits";
	}
}



