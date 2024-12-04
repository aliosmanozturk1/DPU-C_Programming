#include <stdio.h>

int main() {
    int sayi1, sayi2, buyuk;
    printf("Lütfen ilk sayıyı giriniz: ");
    scanf("%d", &sayi1);

    printf("Lütfen ikinci sayıyı giriniz: ");
    scanf("%d", &sayi2);

    buyuk = (sayi1 > sayi2) ? sayi1:sayi2;
    printf("Büyük Sayı: %d'dir. \n", buyuk);
}