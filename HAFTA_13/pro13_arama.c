//Kayıtları Listeleyelim:
//aynı isimdeki tüm kayıtlar görünsün
//%10s

#include<stdio.h>
#include<string.h>

int main()
{
	FILE* p;
	char isim[10], aranan[10];
	char soyisim[10];
	char yas[10];
	p = fopen("metin.txt", "r");

	printf("Aranacak kayit ismi ? :");
	scanf("%s", &aranan);

	int kayitYok = 0;
	while (!feof(p))
	{
		//veriler %10s biçimiyle kaydedildiğinden:
		fscanf(p, "%10s%10s%10s\n", isim, soyisim, yas);

		if (strstr(soyisim, aranan))
//katar içinde katar arıyordu, adres döndürüyordu.
		{
			printf("| %s | %s | %s |\n", isim, soyisim, yas);
			kayitYok++;
		}

	}
	if (!kayitYok)
//while içine koymadık çünkü her döngüde yazardı
		printf("Aranilan Kayit Bulunamadi : %s \n", aranan);
	fclose(p);

	return 0;
}
