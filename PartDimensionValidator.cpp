/*
 * PartDurationMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */



#include <iostream>
#include "PartDimensionValidator.h"



PartDimensionValidator::PartDimensionValidator(float threshold)
{
	_partDimensionThreshold = threshold;
	_alarm = new MechanicalFailureAlarm();
}

PartDimensionValidator::~PartDimensionValidator()
{
	delete _alarm;
}

bool PartDimensionValidator::validateParameter(float currentVal)
{
	if(currentVal > _partDimensionThreshold)
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

