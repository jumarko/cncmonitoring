/*
 * OperatingDuration.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_OPERATINGDURATIONMONITOR_H_
#define MONITOR_OPERATINGDURATIONMONITOR_H_

#include "IMonitor.h"
#include "IMediator.h"
#include "IColleague.h"

class OperatingDurationMonitor:public IMonitor, public IColleague
{
	public:
		OperatingDurationMonitor();
		~OperatingDurationMonitor();
		void onOperatingDurationUpdate();
		float getCurrentParamValue();
		void setMediator(IMediator*);
		void paramValueObserverUpdate(float);
	private:
		IMediator* _mediator;
		float _operatingDurationInMinutes;
};



#endif /* MONITOR_OPERATINGDURATIONMONITOR_H_ */
