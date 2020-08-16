/*
 * IMediator.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef IMEDIATOR_H_
#define IMEDIATOR_H_

#include "MonitorDefines.h"


class IMediator
{
public:
	virtual float getCurrentParamValue() = 0;
	virtual float getThresholdValue() = 0;
	virtual void setThresholdValue(float) = 0;
	virtual void triggerAlarm() = 0;
	virtual void validateParameter() = 0;
	virtual void setMonitorType(enMonitorParams) = 0;
	virtual enMonitorParams getMonitorType() = 0;

};


#endif /* IMEDIATOR_H_ */
