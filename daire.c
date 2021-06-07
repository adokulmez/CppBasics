#include <stdio.h>
#define PI 3.14159

int main() {
    
    double yaricap;    /*dairenin yaricapi*/
    double alan;
    double cevre;
    
    printf("Dairenin yaricapini giriniz:\n");
    scanf("%lf",&yaricap);
    alan=PI*yaricap*yaricap; /*dairenin alan hesaplamasi*/
    cevre=2*PI*yaricap;
    printf("Dairenin alani:%f\n",alan);
    printf("Dairenin cevresi:%f\n", cevre);
    
    return(0);
}

