/*
 * PartDurationMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_PARTDIMENSIONVALIDATOR_H_
#define MONITOR_PARTDIMENSIONVALIDATOR_H_

#include "IValidator.h"
#include "MechanicalFailureAlarm.h"

class PartDimensionValidator:public IValidator
{
public:
	explicit PartDimensionValidator(float threshold);
	virtual ~PartDimensionValidator();
	void validateParameter(float);
private:
	IAlarm *_alarm;
	float _partDimensionThreshold;
};




#endif /* MONITOR_PARTDIMENSIONVALIDATOR_H_ */
