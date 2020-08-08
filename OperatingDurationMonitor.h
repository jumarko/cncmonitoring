/*
 * OperatingDuration.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_OPERATINGDURATIONMONITOR_H_
#define MONITOR_OPERATINGDURATIONMONITOR_H_

#include "OperatingDurationValidator.h"

class OperatingDurationMonitor
{
	public:
		OperatingDurationMonitor(float);
		~OperatingDurationMonitor();
		void onOperatingDurationUpdate();
	private:
		IValidator* _validator;
		float _operatingDurationInMins;
};



#endif /* MONITOR_OPERATINGDURATIONMONITOR_H_ */
