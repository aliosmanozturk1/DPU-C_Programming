#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        dizi[i] = rand() % 100 - 15;
        printf("Dizi[%d] = %d\n", i, dizi[i]);
    }

    return 0;
}