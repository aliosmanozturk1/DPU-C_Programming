//"Dosyalar" konusuna giriş :

#include <stdio.h> //FILE, putc(), fputs()
int main()
{
	FILE *p;
	/*
		p dosya tipi değişkenidir ve dosya işaretcisidir.
		FILE stdio.h kütüphanesinde tanımlı özel bir veri tipidir.
		Bütün dosya işaretcileri FILE tipinde tanımlanmak zorundadır.
	*/

	p = fopen("DpuBilgisayar.txt", "w");// r: olan bir dosyayı okuma modunda açar
	//p=fopen("C:\\ZZ_CPROG\\DpuBilgisayar3.txt","w");
	/*
		r  okuma
		w  yazma
		a  ilave etme
	*/
	/* 	fopen fonksiyonu ile bir dosya write modunda açıldığında,
		dosya yeniden oluşturulur.
		Eğer daha önceden oluşturulmak istenen dosya oluşturulmuş ve
		bilgi girilmişse bu bilgiler kaybedilir.
		Dosyaya sadece ilave kayıt eklenmek isteniyorsa dosya
		a modun da açılmalıdır.
	*/
	/*if((p=fopen("test","w"))==NULL)
		{
			puts("Dosya açılamıyor \n");
			exit(0);
		}
*/
	putc('d', p);
	putc('p', p);
	putc('u', p);
	fputs(" Bilgisayar", p);	//stringi işaretçinin gösterdiği dosyaya yaz

	fclose(p);
	//fopen() fonksiyonu ile açılan dosyaları kapatmak için. 
	return 0;
}

