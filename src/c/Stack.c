/*
 * Stack.c
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#include "../h/Stack.h"

Stack* createStack() {
	Stack* stack = (Stack*) malloc(sizeof(Stack));
	stack->elements = NULL;

	return stack;
}

void stackPush(Stack* stack, Container *iContainer) {
	if(stack->elements == NULL) {
		stack->elements = eleCreate(iContainer);
	} else {
		eleAdd(stack->elements, iContainer);
	}
}

Container* stackPop(Stack* stack) {
	//check if top is first element
	if(stack->elements->next == NULL) {
		Container* tempC = stack->elements->container;
		stack->elements = NULL;
		return tempC;
	}

	Ele* itEle = stack->elements;
	Ele* previousEle = NULL;

	while(itEle->next != NULL) {
		previousEle = itEle;
		itEle = itEle->next;
	}

	if(previousEle != NULL) {
		previousEle->next = NULL;
	}
	return itEle->container;
}

int stackIsEmpty(Stack* stack) {
	if(stack->elements == NULL) {
		return 1;
	} else {
		return 0;
	}
}

Container* stackContains(Stack* stack, Container* cContainer) {
	Ele* itEle = stack->elements;

	while(itEle != NULL) {
		if(containerEquals(cContainer, itEle->container) == 1)
			return itEle->container;

		if(itEle->next != NULL) {
			itEle = itEle->next;
		} else {
			break;
		}
	}

	free(itEle);

	return NULL;
}

Stack* stackAddAll(Stack* stackA, Stack* stackB) {
	Stack* stackNew = createStack();

	Ele* itEle = stackA->elements;
	while(itEle != NULL) {
		stackPush(stackNew, itEle->container);

		if(itEle->next != NULL) {
			itEle = itEle->next;
		} else {
			break;
		}
	}

	itEle = stackB->elements;
	while(itEle != NULL) {
		stackPush(stackNew, itEle->container);

		if(itEle->next != NULL) {
			itEle = itEle->next;
		} else {
			break;
		}
	}

	return stackNew;
}

void stackRemove(Stack* stack, Container* rContainer) {
	//check if element to remove is first element of linked list which serves as reference
	if(containerEquals(stack->elements->container, rContainer)) {
		Ele* tempEle = stack->elements;
		stack->elements = stack->elements->next;
		free(tempEle);
	} else {
		eleRemove(stack->elements, rContainer);
	}
}

void stackPrint(Stack* stack) {
	printf("------Stack-----\n");

	if(stack->elements != NULL) {
		elePrint(stack->elements);
	} else {
		printf("Stack is empty.");
	}
}
