/*
 * ErrorCodesDefine.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef ALARM_ERRORCODESDEFINE_H_
#define ALARM_ERRORCODESDEFINE_H_

#include "MonitorDefines.h"
#include <string>

static std::string errorTextHash[en_MONITORPARAM_MAX][en_VALIDATION_MAX] = {
		"System is Normal", "Operating Temperature exceeds threshold. Please take necessary action to reduce temperature. Current Temperature is :",
		"System is Normal", "Machine operates for more time than expected. Please stop the machine for maintenance. Total operating duration is :",
		"System is Normal", "The part dimension exceeds threshold. Last part dimension is :",
		"System is Normal", "The error code received during self diagnosis is : "
};

static std::string selfDiagError[TOTAL_SELF_DIAG_ERROR_CODES] = {
		"No Data received from Machine",
		"Controller Board is not OK",
		"Configuration Data in Machine is corrupted"
};

#endif /* ALARM_ERRORCODESDEFINE_H_ */
