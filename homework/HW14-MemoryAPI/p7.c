#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = data + 4 * sizeof(int);
    free(p);
    printf("%d\n", data[0]);
    printf("%d\n", data[9]);
}