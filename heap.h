#ifndef HEAP_H
#define HEAP_H

#define MAX 100

typedef struct {
    int id;
    int priority;
    char data[100];
} Request;

typedef struct {
    Request arr[MAX];
    int size;
} MinHeap;

void initHeap(MinHeap *heap);
void insert(MinHeap *heap, Request req);
Request extractMin(MinHeap *heap);
void heapify(MinHeap *heap, int i);

#endif
