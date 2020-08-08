/*
 * PartDurationMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include "PartDimensionMonitor.h"

PartDimensionMonitor::PartDimensionMonitor(float threshold)
{
	_validator = new PartDimensionValidator(threshold);
}

PartDimensionMonitor::PartDimensionMonitor(const PartDimensionMonitor&)
{
	_validator = new PartDimensionValidator();
}

PartDimensionMonitor::~PartDimensionMonitor()
{
	delete _validator;
}

void PartDimensionMonitor::onPartDimensionUpdate(float currentVal)
{
	_validator->validateParameter(currentVal);
}



