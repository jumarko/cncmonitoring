/*
 * PartDurationMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_PARTDIMENSIONMONITOR_H_
#define MONITOR_PARTDIMENSIONMONITOR_H_


#include "PartDimensionValidator.h"

class PartDimensionMonitor
{
	public:
		PartDimensionMonitor(float);
		~PartDimensionMonitor();
		void onPartDimensionUpdate(float);
	private:
		IValidator* _validator;
};


#endif /* MONITOR_PARTDIMENSIONMONITOR_H_ */
