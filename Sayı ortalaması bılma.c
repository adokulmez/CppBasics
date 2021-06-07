/* 10prg01.c: 10 tamsayýnýn aritmetik ortalamasýný hesaplar */

#include <stdio.h>

#define N 10

int main()
{
   int   i;
   float x[N], ort, toplam = 0.0;

   for(i=0; i<N; i++)
   {
      /* i. eleman okunuyor ... */
      printf("%d. sayi : ",i+1);
      scanf("%f",&x[i]);

      toplam += x[i];
   }

   ort = toplam/N;

   printf("Sayilarin ortalamasi = %f\n",ort);

 return 0;
}
