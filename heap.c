#include <stdio.h>
#include "heap.h"

void swap(Request *a, Request *b) {
    Request temp = *a;
    *a = *b;
    *b = temp;
}

void initHeap(MinHeap *heap) {
    heap->size = 0;
}

void insert(MinHeap *heap, Request req) {
    int i = heap->size++;
    heap->arr[i] = req;

    while (i != 0 && heap->arr[(i - 1) / 2].priority > heap->arr[i].priority) {
        swap(&heap->arr[i], &heap->arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void heapify(MinHeap *heap, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < heap->size &&
        heap->arr[left].priority < heap->arr[smallest].priority)
        smallest = left;

    if (right < heap->size &&
        heap->arr[right].priority < heap->arr[smallest].priority)
        smallest = right;

    if (smallest != i) {
        swap(&heap->arr[i], &heap->arr[smallest]);
        heapify(heap, smallest);
    }
}

Request extractMin(MinHeap *heap) {
    Request root = heap->arr[0];
    heap->arr[0] = heap->arr[--heap->size];
    heapify(heap, 0);
    return root;
}
