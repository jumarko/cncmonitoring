/*
 * DiagnosisFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_DIAGNOSISFAILUREALARM_H_
#define ALARM_DIAGNOSISFAILUREALARM_H_

#include "IAlarm.h"

class DiagnosisFailureAlarm:public IAlarm
{
	public:
		DiagnosisFailureAlarm(){}
		virtual ~DiagnosisFailureAlarm(){}
		virtual void raiseAlarm(){
			std::cout << "Self-Diagnosis failure! Please check!";
		}
};


#endif /* ALARM_DIAGNOSISFAILUREALARM_H_ */
