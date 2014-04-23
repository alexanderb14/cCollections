/*
 * Test.c
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#include "../h/Test.h"

void testStack() {
	Stack* myStack = createStack();

	printf("------void stackPush(Stack* stack, Container *iContainer)------\n");
	printf("/* push 10 Elements onto stack */\n");
	for(int i=0; i<10; i++) {
		Container* myC = containerCreate(i);
		stackPush(myStack, myC);
	}
	printStack(myStack);
	printf("\n");

	printf("------Container* stackPop(Stack* stack) ------\n");
	printf("/* pop 10 Elements from stack */\n");
	for(int i=0; i<10; i++) {
		printf("Container popped: ");
		containerPrint(stackPop(myStack));
	}
	printStack(myStack);
	printf("\n");

	printf("------void stackPush(Stack* stack, Container *iContainer)------\n");
	printf("/* push 10 Elements onto stack */\n");
	for(int i=0; i<10; i++) {
		Container* node = containerCreate(i);
		stackPush(myStack, node);
	}
	printStack(myStack);
	printf("\n");

	printf("------Container* stackContains(Stack* stack, Container* cContainer)------\n");
	for(int i=0; i<10; i++) {
		printf("/* Searching for Container with value %d */\n", i);
		Container* myC = containerCreate(i);
		containerPrint(stackContains(myStack, myC));
		free(myC);
	}
	printf("\n");

	printf("------void stackRemove(Stack* stack, Container* rContainer)------\n");
	for(int i=0; i<10; i++) {
		printf("/* Removing Element with value %d */\n", i);
		Container* myC = containerCreate(i);
		stackRemove(myStack, myC);
		printStack(myStack);
		free(myC);
	}
	printf("\n");
}

void testQueue() {
	Queue* myQueue = createQueue();

	for(int i=0; i<10; i++) {
		Container* c = containerCreate(i);
		queuePush(myQueue, c);
	}

	containerPrint(queuePop(myQueue));
	containerPrint(queuePop(myQueue));
	containerPrint(queuePop(myQueue));
}
