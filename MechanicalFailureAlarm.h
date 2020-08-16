/*
 * MechanicalFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_MECHANICALFAILUREALARM_H_
#define ALARM_MECHANICALFAILUREALARM_H_

#include "IAlarm.h"
#include "IMediator.h"
#include "IColleague.h"

class MechanicalFailureAlarm:public IAlarm,public IColleague
{
	public:
		MechanicalFailureAlarm();
		virtual ~MechanicalFailureAlarm(){}
		void setMediator(IMediator*);
		virtual void raiseAlarm(enValidationResultType);
	private:
		IMediator* _mediator;
};


#endif /* ALARM_MECHANICALFAILUREALARM_H_ */
