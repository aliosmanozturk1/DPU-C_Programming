/* Fibonacci */

#include <stdio.h>

int main() {
    int sayi1 = 0;
    int sayi2 = 1;
    int i, n, temp;

    printf("Kaç Fibonacci Sayısı Yazılsın: ");
    scanf("%d", &n);

    printf("Sayi 1: %d\t", sayi1);
    printf("Sayi 2: %d\n", sayi2);

    for(i = 0; i < n-2; ++i){
        printf("%d\n", sayi1 + sayi2);
        temp = sayi1;
        sayi1 = sayi2;
        sayi2 = temp + sayi2;
    }

    return 0;
}