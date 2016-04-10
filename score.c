#include<stdio.h>
#include<stdlib.h>

int *score(char a, char b) {
        int *array = (int *)malloc(sizeof(int));
        if (a== 'C' && b == 'C') {
                *array = 20;
                *(array+1) = 20;
        }
        else if (a== 'C' && b == 'D') {
                *array = 0;
                *(array+1) = 30;
        }
        else if (a== 'D' && b == 'C') {
                *array = 30;
                *(array+1) = 0;
        }
        else if (a== 'D' && b == 'D') {
                *array = 10;
                *(array+1) = 10;
        }
        return array;
}


