/*
 * Stack.h
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdlib.h>
#include <stdio.h>

#include "Ele.h"

typedef struct tStack Stack;
struct tStack {
	Ele* elements;
};

Stack* createStack();
void stackPush(Stack* stack, Container *iContainer);
Container* stackPop(Stack* stack);
int stackIsEmpty(Stack* queue);
Container* stackContains(Stack* stack, Container* cContainer);
Stack* stackAddAll(Stack* stackA, Stack* stackB);
void stackRemove(Stack* stack, Container* rContainer);
void printStack(Stack* stack);

#endif /* STACK_H_ */
