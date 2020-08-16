/*
 * Mediator.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef MEDIATOR_H_
#define MEDIATOR_H_


#include "IMediator.h"
#include "IMonitor.h"
#include "IValidator.h"
#include "IAlarm.h"
#include "MonitorDefines.h"

class Mediator:public IMediator
{
public:
	explicit Mediator(IMonitor*, IValidator*, IAlarm*);
	Mediator(const Mediator&);
	virtual ~Mediator();
	virtual float getCurrentParamValue();
	virtual void setThresholdValue(float);
	virtual float getThresholdValue();
	virtual void triggerAlarm();
	virtual void validateParameter();
	virtual void setMonitorType(enMonitorParams);
	virtual enMonitorParams getMonitorType();
private:
	IMonitor* _monitor;
	IValidator* _validator;
	IAlarm* _alarm;
	float _thresholdValue;
	enMonitorParams _monitorParam;
	enValidationResultType _validationResult;

};


#endif /* MEDIATOR_H_ */
