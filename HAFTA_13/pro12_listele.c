//Kayıtları Listeleyelim:

#include<stdio.h>

int main()
{
	FILE *p;   
	p = fopen("metin.txt","r");

	int c;
	if (p) 
	{
		while ((c = getc(p)) != EOF)
			putchar(c);
		fclose(p);
	}	

	return 0;
}
