/*
 * IColleague.h
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */

#ifndef ICOLLEAGUE_H_
#define ICOLLEAGUE_H_

#include "IMediator.h"

class IColleague
{
public:
	virtual void setMediator(IMediator*) = 0;
};


#endif /* ICOLLEAGUE_H_ */
