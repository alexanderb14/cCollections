/*
 * Container.h
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct tContainer Container;

struct tContainer {
	int value;		//add your values
};

Container* containerCreate(int v);
int containerEquals(Container* a, Container* b);
void containerPrint(Container* c);

#endif /* CONTAINER_H_ */
