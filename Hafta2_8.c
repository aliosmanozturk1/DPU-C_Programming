#include <stdio.h>

int main() {
    char not;
    printf("Lütfen karakter giriniz: ");
    scanf("%c", &not);

    switch (not) {
        case 'a':
            printf("a'ya bastınız.\n");
            break;
        case 'b':
            printf("b'ye bastınız.\n");
            break;
        default:
            printf("a ve b dışında bir tuşa bastınız!\n");
    }

    return 0;
}