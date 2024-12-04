#include <stdio.h>

int main() {
    char a;

    printf("1 ile 5 arasında bir rakam giriniz: ");
    scanf("%c", &a);

    switch (a) {
        case '1':
            printf("Çok zayıf\n");
            break;

        case '2':
            printf("Zayıf\n");
            break;

        case '3':
            printf("Orta\n");
            break;

        case '4':
            printf("İyi \n");
            break;

        case '5':
            printf("Pekiyi\n");
            break;

        default:
            printf("Yanlış Seçim Yaptınız\n");
    }

    return 0;
}