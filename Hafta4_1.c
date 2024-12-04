#include <stdio.h>

int main() {
    char A[3] = "DPU";
    int B[5] = {1,2,3,4,5};

    for(int i = 0; i < 3; i++)
    {
        printf("A dizisinin %d. elemanı: %c\n", i + 1, A[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("B dizisinin %d. elemanı: %d\n", i + 1, B[i]);
    }
}