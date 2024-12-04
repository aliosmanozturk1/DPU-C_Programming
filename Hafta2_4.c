#include <stdio.h>

int main() {

    int puan;
    printf("Puanı giriniz: ");
    scanf("%d", &puan);

    if (puan >= 90) {
        printf("A");
    }

    else if (puan >= 80) {
        printf("B");
    }

    else if (puan >= 70) {
        printf("C");
    }

    else if (puan >= 50) {
        printf("D");
    }

    else {
        printf("F");
    }

    return 0;

}