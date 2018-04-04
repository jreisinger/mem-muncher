#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int max = -1;
    int mb = 0;
    char* buffer;

    if(argc > 1)
        max = atoi(argv[1]);

    while((buffer=malloc(100*1024*1024)) != NULL && mb != max) {
        memset(buffer, 0, 100*1024*1024);
        mb++;
        printf("Allocated %d MB\n", 100*mb);
        sleep(1);
    }

    return 0;
}