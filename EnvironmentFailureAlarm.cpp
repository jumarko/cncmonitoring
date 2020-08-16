/*
 * EnvironmentFailureAlarm.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */


#include "EnvironmentFailureAlarm.h"
#include "ErrorCodesDefine.h"
#include <iostream>

EnvironmentFailureAlarm::EnvironmentFailureAlarm()
{
	_mediator = 0;
}

void EnvironmentFailureAlarm::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void EnvironmentFailureAlarm::raiseAlarm(enValidationResultType validationResult)
{
	std::cout << "Environment Failure!\n";
	std::cout << errorTextHash[(int)_mediator->getMonitorType()][(int)validationResult] << _mediator->getCurrentParamValue();
}

