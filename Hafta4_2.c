#include <stdio.h>

int main()
{
    int A[4];
    printf("Dizinin elemanlarını giriniz!\n");

    for(int i = 0; i < 4; i++)
    {
        printf("A[%d] elemanını giriniz: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(int i = 0; i < 4; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}