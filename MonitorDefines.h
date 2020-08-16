/*
 * MonitorDefines.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef MONITORDEFINES_H_
#define MONITORDEFINES_H_


typedef enum enMonitorParam
{
	en_MONITORPARAM_TEMPERATURE = 0,
	en_MONITORPARAM_DURATION,
	en_MONITORPARAM_PART_DIMENSION,
	en_MONITORPARAM_SELF_DIAGNOSIS,
	en_MONITORPARAM_MAX
}enMonitorParams;

typedef enum enValidationResult
{
	en_VALIDATION_SUCCESS = 0,
	en_VALIDATION_FAILED,
	en_VALIDATION_MAX
}enValidationResultType;


#define TOTAL_SELF_DIAG_ERROR_CODES 3

#endif /* MONITORDEFINES_H_ */
