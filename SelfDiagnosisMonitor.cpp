/*
 * SelfDiagnosisMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include "SelfDIagnosisMonitor.h"

SelfDiagnosisMonitor::SelfDiagnosisMonitor()
{
	_validator = new SelfDiagnosisValidator();
}

SelfDiagnosisMonitor::~SelfDiagnosisMonitor()
{
	delete _validator;
}

void SelfDiagnosisMonitor::onSelfDiagnosisUpdate(float status)
{
	_validator->validateParameter(status);
}


