#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int step = 100; // increase this to have your memory munched faster :-)

    int max = -1;
    int mb = 0;
    char* buffer;

    if(argc > 1)
        max = atoi(argv[1]);

    while((buffer=malloc(step*1024*1024)) != NULL && mb != max) {
        memset(buffer, 0, step*1024*1024);
        mb++;
        printf("Allocated %d MB\n", step*mb);
        sleep(1);
    }

    return 0;
}
