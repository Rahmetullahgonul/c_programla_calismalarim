#include <stdio.h>
#include <stdlib.h>

void ucgen_alan(float kenar1, float kenar2, float kenar3)
{
    float alan;
    float u;
    u=(float)((kenar1+kenar2+kenar3)/2);
    alan = sqrt(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
    printf("kenar degerleri = %.1f   %.1f   %.1f olan ucgenin alani = %.2f",kenar1,kenar2,kenar3,alan);
}



int main()
{
    /* soru:
    kenar uzunlukları birbirinden farklı bir ucgenin alanını bulduran programı yazın

    u=(a+b+c)/2
    alan^2=u*(u-a)*(u-b)*(u-c)
    */

    float kenar1,kenar2,kenar3;
    printf("lutfen ucgenin uc kenar degerini de giriniz : \n");
    scanf("%f %f %f",&kenar1,&kenar2,&kenar3);

    ucgen_alan(kenar1,kenar2,kenar3);

    return 0;
}
