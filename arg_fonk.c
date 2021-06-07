#include <stdio.h>

int kup_al(int);

int main(){
    
    int x,y;
    printf("Kupu alinacak sayiyi girin:");
    scanf("%d",&x);
    y=kup_al(x);
    printf("Girdiginiz sayinin kupu:%d",y);
    
    return(0);
}

int kup_al(int n)
{
    int kup;
    kup=n*n*n;
    return(kup);
}
