#include <stdio.h>

void tablo(int no);

int main()
{
    int sayi;
    printf("\n Bir sayı giriniz: ");
    scanf("%d", &sayi);
    tablo(sayi);
    return 0;
}

void tablo (int no)
{
    int n = 0;
    printf("\n %d için çarpım tablosu \n", no);

    for (n = 1; n <= 10; n++) {
        printf("\n %d * %d", no, n, (no * n));
    }
}