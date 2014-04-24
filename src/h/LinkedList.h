/*
 * LinkedList.h
 *
 *  Created on: 24.04.2014
 *      Author: alexanderb
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>
#include <stdio.h>

#include "Ele.h"

typedef struct tLinkedList LinkedList;
struct tLinkedList {
	Ele* elements;
};

LinkedList* createLinkedlist();
void linkedlistAdd(LinkedList* linkedlist, Container* iContainer);
void linkedlistRemove(LinkedList* linkedList, Container* rContainer);
int linkedlistIsEmpty(LinkedList* linkedList);
LinkedList* linkedlistAddAll(LinkedList* linkedListA, LinkedList* linkedListB);
Container* linkedlistContains(LinkedList* linkedList, Container* cContainer);
void linkedlistPrint(LinkedList* linkedList);

#endif /* LINKEDLIST_H_ */
