/*
 * SelfDIagnosisMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_SELFDIAGNOSISVALIDATOR_H_
#define MONITOR_SELFDIAGNOSISVALIDATOR_H_


#include "IValidator.h"
#include "IMediator.h"
#include "IColleague.h"
#include "MonitorDefines.h"

class ParamErrorCodeValidator:public IValidator,public IColleague
{
public:
	ParamErrorCodeValidator();
	virtual ~ParamErrorCodeValidator();
	void validateParameter(float);
	void setMediator(IMediator*);
	enValidationResultType getValidationResult() { return _validationResult; }
private:
	IMediator* _mediator;
	enValidationResultType _validationResult;
};


#endif /* MONITOR_SELFDIAGNOSISVALIDATOR_H_ */
