/*
 * IMonitor.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef IMONITOR_H_
#define IMONITOR_H_


class IMonitor
{
public:
	IMonitor(){}
	virtual ~IMonitor(){}
	virtual float getCurrentParamValue() = 0;
	virtual void paramValueObserverUpdate(float) = 0;
};


#endif /* IMONITOR_H_ */
