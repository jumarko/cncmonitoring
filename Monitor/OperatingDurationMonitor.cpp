/*
 * OperatingDurationMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include "OperatingDurationMonitor.h"

OperatingDurationMonitor::OperatingDurationMonitor(float threshold)
{
	_validator = new OperatingDurationValidator(threshold);
}

OperatingDurationMonitor::~OperatingDurationMonitor()
{
}

void OperatingDurationMonitor::onOperatingDurationUpdate()
{
	_operatingDurationInMins += 15;
	_validator->validateParameter(_operatingDurationInMins);
}

