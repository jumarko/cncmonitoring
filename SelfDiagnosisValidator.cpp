/*
 * SelfDiagnosisMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include <iostream>
#include "SelfDiagnosisValidator.h"


SelfDiagnosisValidator::SelfDiagnosisValidator()
{
	_alarm = new DiagnosisFailureAlarm();
}

SelfDiagnosisValidator::~SelfDiagnosisValidator()
{
	delete _alarm;
}

bool SelfDiagnosisValidator::validateParameter(float currentVal)
{
	if(currentVal != 0XFF)
	{
		_alarm->raiseAlarm();
		return true;
	}
	else
	{
		std::cout <<"Machine is normal";
		return false;
	}
}
