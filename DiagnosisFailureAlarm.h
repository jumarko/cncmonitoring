/*
 * DiagnosisFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_DIAGNOSISFAILUREALARM_H_
#define ALARM_DIAGNOSISFAILUREALARM_H_

#include "IAlarm.h"
#include "IMediator.h"
#include "IColleague.h"

class DiagnosisFailureAlarm:public IAlarm
{
	public:
		DiagnosisFailureAlarm(){}
		virtual ~DiagnosisFailureAlarm(){}
		void setMediator(IMediator*);
		virtual void raiseAlarm(enValidationResultType);
	private:
		IMediator* _mediator;
};


#endif /* ALARM_DIAGNOSISFAILUREALARM_H_ */
