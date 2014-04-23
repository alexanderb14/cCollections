/*
 * Queue.c
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#include "../h/Queue.h"

Queue* createQueue() {
	Queue* queue = (Queue*) malloc(sizeof(Queue));
	queue->elements = NULL;

	return queue;
}

void queuePush(Queue* queue, Container* iContainer) {
	if(queue->elements == NULL) {
		queue->elements = eleCreate(iContainer);
	} else {
		eleAdd(queue->elements, iContainer);
	}
}

Container* queuePop(Queue* queue) {
	Container* firstNode = queue->elements->container;
	queue->elements = queue->elements->next;
	return firstNode;
}

int queueIsEmpty(Queue* queue) {
	if(queue->elements->next == NULL) {
		return 1;
	} else {
		return 0;
	}
}

void printQueue(Queue* queue) {
	printf("------Queue-----");
	elePrint(queue->elements);
	printf("----------------");
}
