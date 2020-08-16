/*
 * ParamComparisonTypeValidator.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#include "ParamThresholdValidator.h"

#include "MonitorDefines.h"

ParamThresholdValidator::ParamThresholdValidator():
	_validationResult(en_VALIDATION_MAX)
{
	_mediator = 0;
}

ParamThresholdValidator::~ParamThresholdValidator()
{

}

void ParamThresholdValidator::validateParameter(float value)
{
	_validationResult = en_VALIDATION_SUCCESS;
	if(value > _mediator->getThresholdValue())
	{
		_validationResult = en_VALIDATION_FAILED;
	}
	_mediator->triggerAlarm();
}

void ParamThresholdValidator::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}
