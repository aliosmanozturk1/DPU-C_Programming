/* Sayının Basamak Değerleri Toplamını Bulma */

#include <stdio.h>

int main()
{
    int sayi, toplam = 0, kalan;
    printf("Bir Sayı Giriniz: ");
    scanf("%d", &sayi);

    while (sayi != 0)
    {
        kalan = sayi % 10;
        toplam = toplam + kalan;
        sayi = sayi / 10;
    }

    printf("Basamaklar Toplamı --> %d\n", toplam);

    return 0;
}