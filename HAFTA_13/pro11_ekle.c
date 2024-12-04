//Kayıt Ekleyelim:
//%10s

#include<stdio.h>
int main()
{
	char isim[10];
	char soyisim[10];
	char yas[10];
	FILE* p;
	p = fopen("metin.txt", "a");

		printf("\n Kisi adi :"); scanf("%s", isim);
		printf("\n Kisi soyadi :"); scanf("%s", soyisim);
		printf("\n Kisi yasi :"); scanf("%s", yas);

		fprintf(p, "%10s %10s %10s\n", isim, soyisim, yas);

	fclose(p);

	return 0;
}
