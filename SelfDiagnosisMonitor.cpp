/*
 * SelfDiagnosisMonitor.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */


#include "SelfDIagnosisMonitor.h"

SelfDiagnosisMonitor::SelfDiagnosisMonitor()
{
	_selfDiagCode = -1;
}

SelfDiagnosisMonitor::~SelfDiagnosisMonitor()
{
}

void SelfDiagnosisMonitor::onSelfDiagnosisUpdate(float status)
{
	_selfDiagCode = status;
	_mediator->validateParameter();
}

float SelfDiagnosisMonitor::getCurrentParamValue()
{
	return _selfDiagCode;
}

void SelfDiagnosisMonitor::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}



void SelfDiagnosisMonitor::paramValueObserverUpdate(float val)
{
	onSelfDiagnosisUpdate(val);
}
