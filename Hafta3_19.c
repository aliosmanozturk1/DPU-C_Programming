/* Tek Satır Cümle İçindeki Boşlukları Saydıralım */

#include <stdio.h>

int main()
{
    int c, bosluk = 0;
    printf("Bir Cümle Giriniz: ");
    c = getchar();

    while (c != '\n')
    {
        if(c == ' ') bosluk++;
        c = getchar(); // Bir sonraki karakteri okuyor.
    }

    printf("Boşluk sayısı --> %d\n", bosluk);
    printf("Kelime sayısı --> %d", bosluk + 1);

    return 0;
}