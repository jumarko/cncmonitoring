/*
l * TemperaturMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef TEMPERATURMONITOR_H_
#define TEMPERATURMONITOR_H_

#include "IMonitor.h"
#include "IMediator.h"
#include "IColleague.h"

class TemperatureMonitor:public IMonitor, public IColleague
{
	public:
		TemperatureMonitor();
		~TemperatureMonitor();
		void onTemperatureValueUpdate(float);
		float getCurrentParamValue();
		void setMediator(IMediator*);
		void paramValueObserverUpdate(float);
	private:
		IMediator* _mediator;
		float _temperatureValue;
};


#endif /* TEMPERATURMONITOR_H_ */
