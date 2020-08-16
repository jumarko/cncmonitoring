/*
 * OperatingDurationMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include "OperatingDurationMonitor.h"

OperatingDurationMonitor::OperatingDurationMonitor()
{
	_operatingDurationInMinutes = 0;
}

OperatingDurationMonitor::~OperatingDurationMonitor()
{
}

void OperatingDurationMonitor::onOperatingDurationUpdate()
{
	_operatingDurationInMinutes += 15;
	_mediator->validateParameter();
}

float OperatingDurationMonitor::getCurrentParamValue()
{
	return _operatingDurationInMinutes;
}

void OperatingDurationMonitor::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void OperatingDurationMonitor::paramValueObserverUpdate(float val)
{
	onOperatingDurationUpdate();
}
