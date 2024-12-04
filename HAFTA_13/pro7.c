// Hatırla : scanf() boşluğa kadar okuyordu
//kelime kelime okumak için fscanf()
//
#include <stdio.h>

int main()
{
    FILE *p;
    char veri[50];
    if((p=fopen("DpuBilgisayar.txt","r"))==NULL)
	{
		printf("dosya acilmadi\n");
		
		return 0;
	}
	do{
		fscanf(p,"%s",veri); //scanf() boşluğa kadar okuyordu
		printf("kelime: %s\n",veri);
	}while(!feof(p));
	
	fclose(p);
	
	return 0;
}
