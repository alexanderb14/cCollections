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

	Ele* tempEle = queue->elements;
	queue->elements = queue->elements->next;
	free(tempEle);

	return firstNode;
}

int queueIsEmpty(Queue* queue) {
	if(queue->elements->next == NULL) {
		return 1;
	} else {
		return 0;
	}
}

void queuePrint(Queue* queue) {
	printf("------Queue-----");
	elePrint(queue->elements);
	printf("----------------");
}
