/*
 * MechanicalFailureAlarm.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#include "MechanicalFailureAlarm.h"
#include "ErrorCodesDefine.h"
#include <iostream>

MechanicalFailureAlarm::MechanicalFailureAlarm()
{
	_mediator = 0;
}

void MechanicalFailureAlarm::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void MechanicalFailureAlarm::raiseAlarm(enValidationResultType validationResult)
{
	std::cout << "Mechanical Failure!\n";
	std::cout << errorTextHash[(int)_mediator->getMonitorType()][(int)validationResult] << _mediator->getCurrentParamValue();
}
