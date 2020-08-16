/*
 * PartDurationMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include "PartDimensionMonitor.h"

PartDimensionMonitor::PartDimensionMonitor()
{
	_partDimensionValue = 0;
}

PartDimensionMonitor::~PartDimensionMonitor()
{
}

void PartDimensionMonitor::onPartDimensionUpdate(float currentVal)
{
	_partDimensionValue = currentVal;
	_mediator->validateParameter();
}

float PartDimensionMonitor::getCurrentParamValue()
{
	return _partDimensionValue;
}

void PartDimensionMonitor::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void PartDimensionMonitor::paramValueObserverUpdate(float val)
{
	onPartDimensionUpdate(val);
}
