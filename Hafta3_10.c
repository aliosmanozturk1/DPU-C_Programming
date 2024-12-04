/* Faktöriyel Hesabı */

#include <stdio.h>

int main() {
    int i, n, toplam;
    toplam = 1;

    printf("Lütfen Faktoriyelinin Hesaplanmasını İstediğiniz Sayıyı Giriniz: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        toplam = toplam * i;
    }

    printf("Toplam: %d", toplam);
    return 0;
}