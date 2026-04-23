#include <stdio.h>
#include "scheduler.h"

int main() {
    MinHeap heap;
    initHeap(&heap);

    addRequest(&heap, 1, "urgency=3", "User Login");
    addRequest(&heap, 2, "urgency=1", "Payment");
    addRequest(&heap, 3, "urgency=5", "Analytics");
    addRequest(&heap, 4, "urgency=2", "Data Fetch");

    processRequests(&heap);

    return 0;
}
