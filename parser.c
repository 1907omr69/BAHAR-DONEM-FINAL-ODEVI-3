#include <stdio.h>
#include <string.h>
#include "parser.h"

// örnek input: "urgency=2"
int parsePriority(char *input) {
    int urgency = 5; // default

    sscanf(input, "urgency=%d", &urgency);

    return urgency;
}
