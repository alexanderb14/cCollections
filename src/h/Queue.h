/*
 * Queue.h
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdlib.h>
#include <stdio.h>

#include "Ele.h"

typedef struct tQueue Queue;
struct tQueue {
	Ele* elements;
};

Queue* createQueue();
void queuePush(Queue* queue, Container* iContainer);
Container* queuePop(Queue* queue);
int queueIsEmpty(Queue* queue);
void printQueue(Queue* queue);
void queueTest();

#endif /* QUEUE_H_ */
