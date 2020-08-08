/*
 * TemperaturMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef TEMPERATURMONITOR_H_
#define TEMPERATURMONITOR_H_

#include "TemperatureValidator.h"

class TemperatureMonitor
{
	public:
	    TemperatureMonitor(){}
		TemperatureMonitor(float);
		~TemperatureMonitor();
		void onTemperatureValueUpdate(float);
	private:
		IValidator* _validator;
		float _temperatureValue;
};


#endif /* TEMPERATURMONITOR_H_ */
