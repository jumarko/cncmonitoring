/*
 * SelfDIagnosisMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_SELFDIAGNOSISMONITOR_H_
#define MONITOR_SELFDIAGNOSISMONITOR_H_


#include "IMonitor.h"
#include "IMediator.h"
#include "IColleague.h"

class SelfDiagnosisMonitor:public IMonitor, public IColleague
{
	public:
		SelfDiagnosisMonitor();
		~SelfDiagnosisMonitor();
		void onSelfDiagnosisUpdate(float);
		float getCurrentParamValue();
		void setMediator(IMediator*);
		void paramValueObserverUpdate(float);
	private:
		IMediator* _mediator;
		float _selfDiagCode;
};



#endif /* MONITOR_SELFDIAGNOSISMONITOR_H_ */
