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
	stackPrint(myStack);
	printf("\n");

	printf("------Container* stackPop(Stack* stack) ------\n");
	printf("/* pop 10 Elements from stack */\n");
	for(int i=0; i<10; i++) {
		printf("Container popped: ");
		containerPrint(stackPop(myStack));
	}
	stackPrint(myStack);
	printf("\n");

	printf("------void stackPush(Stack* stack, Container *iContainer)------\n");
	printf("/* push 10 Elements onto stack */\n");
	for(int i=0; i<10; i++) {
		Container* node = containerCreate(i);
		stackPush(myStack, node);
	}
	stackPrint(myStack);
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
		stackPrint(myStack);
		free(myC);
	}
	printf("\n");
}

void testLinkedList() {
	LinkedList* myLinkedList = createLinkedlist();

	printf("------void linkedlistAdd(LinkedList* linkedlist, Container* iContainer)------\n");
	printf("/* add 10 Elements to LinkedList */\n");
	for(int i=0; i<10; i++) {
		Container* myC = containerCreate(i);
		linkedlistAdd(myLinkedList, myC);
	}
	linkedlistPrint(myLinkedList);
	printf("\n");

	printf("------void linkedlistRemove(LinkedList* linkedList, Container* rContainer)------\n");
	printf("/* removing 10 Elements from LinkedList */\n");
	for(int i=0; i<10; i++) {
		Container* myC = containerCreate(i);
		linkedlistRemove(myLinkedList, myC);
	}
	linkedlistPrint(myLinkedList);
	printf("\n");

	printf("------int linkedlistIsEmpty(LinkedList* linkedList)------\n");
	printf("linkedlistIsEmpty(myLinkedList) returned %d\n", linkedlistIsEmpty(myLinkedList));
	printf("\n\n");

	printf("------LinkedList* linkedlistAddAll(LinkedList* linkedListA, LinkedList* linkedListB)------\n");
	for(int i=0; i<10; i++) {
		Container* myC = containerCreate(i);
		linkedlistAdd(myLinkedList, myC);
	}
	LinkedList* myLinkedList2 = createLinkedlist();
	for(int i=10; i<20; i++) {
		Container* myC = containerCreate(i);
		linkedlistAdd(myLinkedList2, myC);
	}
	linkedlistAddAll(myLinkedList, myLinkedList2);
	linkedlistPrint(myLinkedList);
	printf("\n");

	printf("------Container* linkedlistContains(LinkedList* linkedList, Container* cContainer)------\n");
	for(int i=0; i<20; i++) {
		printf("/* Searching for Container with value %d */\n", i);
		Container* myC = containerCreate(i);
		containerPrint(linkedlistContains(myLinkedList, myC));
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
