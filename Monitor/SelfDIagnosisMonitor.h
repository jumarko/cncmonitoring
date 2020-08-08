/*
 * SelfDIagnosisMonitor.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_SELFDIAGNOSISMONITOR_H_
#define MONITOR_SELFDIAGNOSISMONITOR_H_


#include "../Validator/SelfDiagnosisValidator.h"

class SelfDiagnosisMonitor
{
	public:
		SelfDiagnosisMonitor();
		~SelfDiagnosisMonitor();
		void onSelfDiagnosisUpdate(float);
	private:
		IValidator* _validator;
};



#endif /* MONITOR_SELFDIAGNOSISMONITOR_H_ */
