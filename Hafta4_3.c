#include <stdio.h>

int main()
{
    int enBuyukSayi;
    int n;
    printf("Lütfen dizinizin eleman sayısını giriniz: ");
    scanf("%d", &n);

    int A[n];

    for(int i = 0; i < n; i++)
    {
        printf("A[%d] elemanını giriniz: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("A[%d] = %d\t", i, A[i]);
    }
    printf("\n");

    enBuyukSayi = A[0];

    for(int i = 0; i < n; i++)
    {
        if (enBuyukSayi < A[i])
        {
            enBuyukSayi = A[i];
        }
    }

    printf("En Büyük Sayı: %d", enBuyukSayi);
    return 0;
}