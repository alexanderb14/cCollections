/*
 * Ele.c
 *
 *  Created on: 22.04.2014
 *      Author: alexanderb
 */

#include "../h/Ele.h"

Ele* eleCreate(Container* iContainer) {
	Ele* ele = (Ele*) malloc(sizeof(Ele));
	ele->next = NULL;
	ele->container = iContainer;

	return ele;
}

void eleAdd(Ele* lEle, Container* iContainer) {
	Ele* iEle = (Ele*) malloc(sizeof(Ele));
	iEle->container = iContainer;
	iEle->next = NULL;

	Ele* it = lEle;

	while(it->next != NULL) {
		it = it->next;
	}

	it->next = iEle;
}

void eleRemove(Ele* lEle, Container* iContainer) {
	Ele* it = lEle;
	Ele* lastEle = NULL;

	while(it != NULL) {
		if(it->container->value == iContainer->value) {
			break;
		}

		if(it->next != NULL) {
			lastEle = it;
			it = it->next;
		} else {
			break;
		}
	}

	if(lastEle != NULL) {
		lastEle->next = it->next;
	}
}

void elePrint(Ele* lEle) {
	Ele* it = lEle;

	while(it != NULL) {
		containerPrint(it->container);

		if(it->next != NULL) {
			it = it->next;
		} else {
			break;
		}
	}
}
