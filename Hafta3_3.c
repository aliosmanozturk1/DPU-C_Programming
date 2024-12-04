/* Alfabedeki Harfleri Yazdırma */

#include <stdio.h>

int main() {
    char harf;

    for(harf = 'A'; harf <= 'Z'; harf++) {
        printf("%c ", harf);
    }

    return 0;
}