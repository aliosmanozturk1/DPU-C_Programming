#include <stdio.h>

int main()
{
    int a, b, x;

    for(a = 0, b = 10; a < 3 && b < 16; a++, b+= 5, scanf("%d", &x), printf("%d\n", x))
        printf("%d, %d \n", a, b);

    return 0;
}