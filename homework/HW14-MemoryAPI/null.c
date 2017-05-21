#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int v = 1;
    int *p = &v;
    p = NULL;
    int r = *p;
}