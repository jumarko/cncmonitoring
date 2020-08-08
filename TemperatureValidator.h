/*
 * TemperatureValidator.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef VALIDATOR_TEMPERATUREVALIDATOR_H_
#define VALIDATOR_TEMPERATUREVALIDATOR_H_

#include "IValidator.h"
#include "EnvironmentFailureAlarm.h"

class TemperatureValidator:public IValidator
{
public:
	TemperatureValidator(){}
	TemperatureValidator(float threshold);
	virtual ~TemperatureValidator();
	void validateParameter(float);
private:
	IAlarm *_alarm;
	float _thresholdTemp;
};


#endif /* VALIDATOR_TEMPERATUREVALIDATOR_H_ */
