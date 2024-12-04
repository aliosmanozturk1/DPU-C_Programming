/* İki sayının yer değişimi */

#include <stdio.h>

int main() {
    int sayi1, sayi2, temp;

    sayi1 = 7;
    sayi2 = 4;
    temp = 0;

    printf("Sayı 1: %d, Sayı 2: %d, Temp: %d\n", sayi1, sayi2, temp);

    temp = sayi1;
    sayi1 = sayi2;
    sayi2 = temp;

    printf("Sayı 1: %d, Sayı 2: %d, Temp: %d\n", sayi1, sayi2, temp);

    return 0;
}