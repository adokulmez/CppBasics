#include <stdio.h>
int main()
{
    double vize,final,ort;
    printf("vize notu");
    scanf("%f",&vize);
    printf("final notu=");
    scanf("%f",&final);
    ort=(vize*0.4)+(final*0.6);
    printf("n ortalama not=%f",ort);
    getch();
}
