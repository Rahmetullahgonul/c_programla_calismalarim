#include <stdio.h>
#include <stdlib.h>


void dort_islem(float *sayi1, float *sayi2, char *islem)
{
    switch(*islem)
    {
    case '+':
        printf("%.1f + %.1f = %.1f",*sayi1,*sayi2,*sayi1+*sayi2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f",*sayi1,*sayi2,*sayi1-*sayi2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f",*sayi1,*sayi2,*sayi1**sayi2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f",*sayi1,*sayi2,(*sayi1 / *sayi2));
        break;
    default:
        printf("lutfen duzgun degerler giriniz ");
        break;
    }
}
int main()
{
    /* soru:
    ** bir fonksiyon yazin
    ** bu fonksiyon; toplama,cikarma,carpma ve bolme islemleri icin switch case
    yapisini kullanin
    ** programi dogurdan degiskenin adresiyle cagirip hesaplatin
    */

    char islem;
    float sayi1,sayi2;
    printf("lutfen yaptirmak istediginiz islem turunu giriniz (+,-,*,/) :\n");
    scanf("%c",&islem);
    printf("lutfen isleme sokmak istediginiz iki sayi girin : \n");
    scanf("%f %f",&sayi1,&sayi2);

    dort_islem(&sayi1,&sayi2,&islem);
    return 0;
}
