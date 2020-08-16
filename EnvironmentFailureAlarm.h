/*
 * EnvironmentFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_ENVIRONMENTFAILUREALARM_H_
#define ALARM_ENVIRONMENTFAILUREALARM_H_

#include "IAlarm.h"
#include "IMediator.h"
#include "IColleague.h"

class EnvironmentFailureAlarm:public IAlarm
{
	public:
		EnvironmentFailureAlarm(){}
		virtual ~EnvironmentFailureAlarm(){}
		void setMediator(IMediator*);
		virtual void raiseAlarm(enValidationResultType);
	private:
		IMediator* _mediator;
};
#endif /* ALARM_ENVIRONMENTFAILUREALARM_H_ */
