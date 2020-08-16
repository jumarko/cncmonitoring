/*
 * IAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_IALARM_H_
#define ALARM_IALARM_H_

#include <iostream>
#include "MonitorDefines.h"

class IAlarm
{
	public:
		IAlarm(){}
		virtual ~IAlarm() {}
		virtual void raiseAlarm(enValidationResultType) = 0;
};



#endif /* ALARM_IALARM_H_ */
