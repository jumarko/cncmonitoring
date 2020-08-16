/*
 * SelfDiagnosisMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include "ParamErrorCodeValidator.h"

#include <iostream>


ParamErrorCodeValidator::ParamErrorCodeValidator():
	_validationResult(en_VALIDATION_MAX)
{
	_mediator = 0;
}

ParamErrorCodeValidator::~ParamErrorCodeValidator()
{

}

void ParamErrorCodeValidator::validateParameter(float value)
{
	_validationResult = en_VALIDATION_SUCCESS;
	if(value != _mediator->getThresholdValue())
	{
		_validationResult = en_VALIDATION_FAILED;
	}
	_mediator->triggerAlarm();
}

void ParamErrorCodeValidator::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}
