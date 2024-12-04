#include <stdio.h>

int main() {
    int sayi;
    printf("Lütfen bir tam sayı giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Girilen Sayı pozitiftir\n");
    }

    else if (sayi < 0) {
        printf("Girilen sayı negatiftir\n");
    }

    else {
        printf("Girilen sayı sıfırdır.\n");
    }

    return 0;
}