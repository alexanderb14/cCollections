/*
 * Ele.h
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#ifndef ELE_H_
#define ELE_H_

#include <stdlib.h>
#include <stdio.h>

#include "Container.h"

typedef struct tEle Ele;
struct tEle {
	Container* container;
	Ele* next;
};

Ele* eleCreate(Container* iContainer);
void eleAdd(Ele* lEle, Container* iContainer);
void eleRemove(Ele* lEle, Container* iContainer);
void elePrint(Ele* lEle);

#endif /* ELE_H_ */
