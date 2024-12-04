/* Do - While Döngüsü */

#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("i'nin değeri: %d\n", i);
        i++;
    } while (i <= 4 && i >= 2);

    return 0;
}