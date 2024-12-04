#include <stdio.h>

/* Biçimli gösterim (tamsayı) ve karakter */

int main()
{
    char a = 'b';
    int b = 12345;

    // 7.karaktere yazar.
    printf("%7c\n", a);

    // 7.karakterden sola doğru yazar.
    printf("%7d\n", b);

    // 3.karakterden sola doğru yazar.
    printf("%3d\n", b);
    printf("%4d\n", b);
    printf("%5d\n", b);
    printf("%6d\n", b);
    printf("%7d\n", b);

    return 0;
}
