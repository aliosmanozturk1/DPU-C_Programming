//bir öncekine benzer yol:
//kelime kelime okumak için fscanf()
//scanf() boşluğa kadar okuyordu
#include <stdio.h>
int main()
{
   FILE *p;
   char veri[50];
   int c;
   p = fopen("DpuBilgisayar.txt","r");
   do {
      c = fscanf(p,"%s",veri); // dosyadan bir kelime oku... 
      if (c != EOF)
         printf("%s\n",veri);    // ekrana yaz...
   } while (c != EOF);           // ta ki EOF olana dek
   fclose(p);
   return 0;
}
