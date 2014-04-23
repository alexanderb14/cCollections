/*
 * Container.c

 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#include "../h/Container.h"

Container* containerCreate(int v) {
	//add custom init here
	Container* c = (Container*) malloc(sizeof(Container));

	c->value = v;

	return c;
}

int containerEquals(Container* a, Container* b) {
	//add custom comparison criteria here
	if(a->value == b->value) {
		return 1;
	} else {
		return 0;
	}
}

void containerPrint(Container* c) {
	//add custom print here
	if(c == NULL) {
		printf("Container=NULL\n");
	} else {
		printf("Container@value=%d\n", c->value);
	}
}
