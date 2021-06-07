#include <stdio.h>

int main()
{
	int sayi[10],i;
	float ort=0,toplam=0;
	
	for(i=0;i<10;i++)
	{
		printf("%d. inci sayiyi girin:\n",i+1);
		scanf("%d",&sayi[i]);
	}
for(i=0;i<10;i++)
	toplam+=sayi[i];
	
	printf("Toplam:%.2f\n",toplam);
	ort=toplam/10;
	printf("Ortalama:%.2f",ort);
	
// for(i=0;i<10;i++)
// printf("Sayi[%d] %d\n",i,
sayi[i];

return 0;
}
