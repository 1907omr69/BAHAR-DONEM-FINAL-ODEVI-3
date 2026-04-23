#include <stdio.h>
#include <string.h>
#include "scheduler.h"
#include "parser.h"

void addRequest(MinHeap *heap, int id, char *priorityStr, char *data) {
    Request req;
    req.id = id;
    req.priority = parsePriority(priorityStr);
    strcpy(req.data, data);

    insert(heap, req);
}

void processRequests(MinHeap *heap) {
    while (heap->size > 0) {
        Request r = extractMin(heap);
        printf("Processing Request ID: %d | Priority: %d | Data: %s\n",
               r.id, r.priority, r.data);
    }
}
