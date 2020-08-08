/*
 * MechanicalFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_MECHANICALFAILUREALARM_H_
#define ALARM_MECHANICALFAILUREALARM_H_

#include "IAlarm.h"

class MechanicalFailureAlarm:public IAlarm
{
	public:
		MechanicalFailureAlarm(){}
		virtual ~MechanicalFailureAlarm(){}
		virtual void raiseAlarm(){
			std::cout << "Mechanical Parameter exceeds threshold! Please check!\n";
		}
};


#endif /* ALARM_MECHANICALFAILUREALARM_H_ */
