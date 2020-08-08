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
}

void SelfDiagnosisMonitor::onSelfDiagnosisUpdate(float status)
{
	_validator->validateParameter(status);
}


