#include <stdio.h>
#include <stdlib.h>

int main()
{


    float hicri_yil,miladi_yil;
    int hesap=0;
    printf("lutfen donusturmek istediginiz hicri yili giriniz : \n");
    scanf("%f",&hicri_yil);

    hesap =hicri_yil/33;
    hesap=hicri_yil-hesap;
    hesap = hesap +622;

    printf("hicri olarak %.0f yili miladi olarak %d yilina denk gelir ",hicri_yil,hesap-1);









    return 0;
}
