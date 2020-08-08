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
	_operatingDurationInMins = 0;
}

OperatingDurationMonitor::OperatingDurationMonitor(const OperatingDurationMonitor& obj)
{
	_validator = new OperatingDurationValidator();
	_operatingDurationInMins = 0;
}

OperatingDurationMonitor::~OperatingDurationMonitor()
{
	delete _validator;
}

void OperatingDurationMonitor::onOperatingDurationUpdate()
{
	_operatingDurationInMins += 15;
	_validator->validateParameter(_operatingDurationInMins);
}

