#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "heap.h"

void addRequest(MinHeap *heap, int id, char *priorityStr, char *data);
void processRequests(MinHeap *heap);

#endif
