#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int sayi;

    srand(time(NULL));
    sayi = rand() % 100;

    printf("Rastgele Sayı Ürettim: %d\n", sayi);

    return 0;
}