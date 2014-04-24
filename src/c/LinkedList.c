/*
 * LinkedList.c
 *
 *  Created on: 24.04.2014
 *      Author: alexanderb
 */

#include "../h/LinkedList.h"

LinkedList* createLinkedlist() {
	LinkedList* linkedlist = (LinkedList*) malloc(sizeof(LinkedList));
	linkedlist->elements = NULL;

	return linkedlist;
}

void linkedlistAdd(LinkedList* linkedlist, Container* iContainer) {
	if(linkedlist->elements == NULL) {
		linkedlist->elements = eleCreate(iContainer);
	} else {
		eleAdd(linkedlist->elements, iContainer);
	}
}

void linkedlistRemove(LinkedList* linkedList, Container* rContainer) {
	//check if element to remove is first element of linked list which serves as reference
	if(containerEquals(linkedList->elements->container, rContainer)) {
		Ele* tempEle = linkedList->elements;
		linkedList->elements = linkedList->elements->next;
		free(tempEle);
	} else {
		eleRemove(linkedList->elements, rContainer);
	}
}

int linkedlistIsEmpty(LinkedList* linkedList) {
	if(linkedList->elements == NULL) {
		return 1;
	} else {
		return 0;
	}
}

LinkedList* linkedlistAddAll(LinkedList* linkedListA, LinkedList* linkedListB) {
	Ele* itEle = linkedListB->elements;
	while(itEle != NULL) {
		linkedlistAdd(linkedListA, itEle->container);

		if(itEle->next != NULL) {
			itEle = itEle->next;
		} else {
			break;
		}
	}

	return linkedListA;
}

Container* linkedlistContains(LinkedList* linkedList, Container* cContainer) {
	Ele* itEle = linkedList->elements;

	while(itEle != NULL) {
		if(containerEquals(cContainer, itEle->container) == 1)
			return itEle->container;

		if(itEle->next != NULL) {
			itEle = itEle->next;
		} else {
			break;
		}
	}

	return NULL;
}

void linkedlistPrint(LinkedList* linkedList) {
	printf("------LinkedList-----\n");

	if(linkedList->elements != NULL) {
		elePrint(linkedList->elements);
	} else {
		printf("LinkedList is empty.");
	}
}
