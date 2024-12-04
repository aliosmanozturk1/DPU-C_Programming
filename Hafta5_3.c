#include <stdio.h>

float topla1(float a, float b);
int topla2(int c, int d, int e);
void yazdir();

int main(void)
{
    float a = 1.1, b = -9.0;
    int c = -21, d = 1, e = 2, sonuc;

    sonuc = topla2(c, d, e);
    printf("a + b = %5.2f\n", topla1(a, b));
    printf("c + d + e = %d\n\n", sonuc);
    yazdir();

    return 0;
}

float topla1(float a, float b)
{
    return a + b;
}

int topla2(int c, int d, int e)
{
    return c + d + e;
}

void yazdir()
{
    printf("Ana fonksiyon içinden çağrıldım ve\n");
    printf("yazdir() isimli fonksiyon tarafından yazdırıldım.\n\n");
}