/*
 * IValidator.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef VALIDATOR_IVALIDATOR_H_
#define VALIDATOR_IVALIDATOR_H_


class IValidator
{
public:
	IValidator() {}
	virtual ~IValidator() {}
	virtual void validateParameter(float) = 0;

};


#endif /* VALIDATOR_IVALIDATOR_H_ */
