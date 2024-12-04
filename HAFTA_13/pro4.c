//EKLEME "a"
//fprintf() fonksiyonu
//dosya ismini kullanıcıdan isteyip o dosyaya bişeyler yazalım

#include <stdio.h>

int main()
{
    FILE* p;
    char veri[30];
    char dosyaismi[20];

    printf("Dosyanin adini uzantisi ile giriniz :");
    gets_s(dosyaismi);
	//C11 standardı ile birlikte tamamen kaldırıldı-->gets_s kullan

    if ((p = fopen(dosyaismi, "a")) == NULL)
    {
        printf("Dosyaniz acilamadi\n");
        return 0;
    }

    printf("Dosyaya yazilacak bir cumle giriniz :");
    gets_s(veri);//gets_s

    fprintf(p, "%s", veri);//fputs(veri,p);
    fclose(p);

    return 0;
}
