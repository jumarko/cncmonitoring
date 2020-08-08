/*
 * Monitoring.cpp
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#include "Monitoring.h"
#include <iostream>
#include <stdio.h>




CNCMonitorFacade::CNCMonitorFacade()
{
	_selfDiagMonitor = new SelfDiagnosisMonitor();
	tempMonitor = new TemperatureMonitor(30.0);
	_durationMonitor = new OperatingDurationMonitor(360);
	_partDimensionMonitor = new PartDimensionMonitor(0.5);
}

int main()
{
	CNCMonitorFacade monitor;
	return 0;
}


