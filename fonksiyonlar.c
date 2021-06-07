#include <stdio.h>

void daire_ciz(void);
void yatay_cizgi(void);
void yazi(void);

int main(){
    daire_ciz();
    yazi();
    yatay_cizgi();
    
    return(0);
}

void daire_ciz(void)
{
     printf("   * \n");
     printf(" *   *\n");
     printf(" *   * \n");
     printf("   * \n");
}

void yatay_cizgi(void)
{
     printf("-------------\n");
}

void yazi(void)
{
     printf("Yazi fonksiyonu calisti...\n");

}
