/*
 * PartDurationMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_PARTDIMENSIONMONITOR_H_
#define MONITOR_PARTDIMENSIONMONITOR_H_


#include "IMonitor.h"
#include "IMediator.h"
#include "IColleague.h"

class PartDimensionMonitor:public IMonitor, public IColleague
{
	public:
		PartDimensionMonitor();
		~PartDimensionMonitor();
		void onPartDimensionUpdate(float);
		float getCurrentParamValue();
		void setMediator(IMediator*);
		void paramValueObserverUpdate(float);
	private:
		IMediator* _mediator;
		float _partDimensionValue;
};


#endif /* MONITOR_PARTDIMENSIONMONITOR_H_ */
