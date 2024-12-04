/* Bir Tuşa Basınca While Döngüsünden Çıkma */

#include <stdio.h>

int main()
{
    char c;

    printf("\nTuşlara basın, çıkmak için 'q'ya basınız: ");
    c = getchar();

    while (c != 'q')
    {
        c = getchar();
    }

    printf("\nGüle Güle :)\n");

    return 0;
}