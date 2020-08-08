/*
 * EnvironmentFailureAlarm.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_ENVIRONMENTFAILUREALARM_H_
#define ALARM_ENVIRONMENTFAILUREALARM_H_

#include <iostream>
#include "IAlarm.h"

class EnvironmentFailureAlarm:public IAlarm
{
	public:
		EnvironmentFailureAlarm(){}
		virtual ~EnvironmentFailureAlarm(){}
		virtual void raiseAlarm() {
			std::cout << "Environment parameter exceeds threshold! Please check!\n";
		}
};

#endif /* ALARM_ENVIRONMENTFAILUREALARM_H_ */
