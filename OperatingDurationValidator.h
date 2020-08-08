/*
 * OperatingDuration.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_OPERATINGDURATIONVALIDATOR_H_
#define MONITOR_OPERATINGDURATIONVALIDATOR_H_

#include "IValidator.h"
#include "MechanicalFailureAlarm.h"

class OperatingDurationValidator:public IValidator
{
public:
	OperatingDurationValidator(float threshold);
	virtual ~OperatingDurationValidator();
	void validateParameter(float);
private:
	IAlarm *_alarm;
	float _thresholdOperatingDurationInMins;
};




#endif /* MONITOR_OPERATINGDURATIONVALIDATOR_H_ */
