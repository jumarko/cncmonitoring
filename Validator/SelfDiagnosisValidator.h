/*
 * SelfDIagnosisMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_SELFDIAGNOSISVALIDATOR_H_
#define MONITOR_SELFDIAGNOSISVALIDATOR_H_


#include "IValidator.h"
#include "../Alarm/DiagnosisFailureAlarm.h"

class SelfDiagnosisValidator:public IValidator
{
public:
	SelfDiagnosisValidator();
	virtual ~SelfDiagnosisValidator();
	void validateParameter(float);
private:
	IAlarm *_alarm;
};


#endif /* MONITOR_SELFDIAGNOSISVALIDATOR_H_ */
