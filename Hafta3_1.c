/* For Döngüsü */

#include <stdio.h>

int main() {
    int sayac;

    for(sayac = 1; sayac <= 10; sayac++) {
        printf("%d\n", sayac);
    }
    printf("Döngü dışı --> sayac: %d\n", sayac);

    return 0;
}