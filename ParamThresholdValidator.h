/*
 * ParameterComparisonValidator.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef VALIDATOR_PARAMTHRESHOLDVALIDATOR_H_
#define VALIDATOR_PARAMTHRESHOLDVALIDATOR_H_

#include "IValidator.h"
#include "IMediator.h"
#include "IColleague.h"
#include "MonitorDefines.h"

class ParamThresholdValidator:public IValidator,public IColleague
{
public:
	ParamThresholdValidator();
	virtual ~ParamThresholdValidator();
	void validateParameter(float);
	void setMediator(IMediator*);
	enValidationResultType getValidationResult() { return _validationResult; }
private:
	IMediator* _mediator;
	enValidationResultType _validationResult;
};



#endif /* VALIDATOR_PARAMTHRESHOLDVALIDATOR_H_ */
