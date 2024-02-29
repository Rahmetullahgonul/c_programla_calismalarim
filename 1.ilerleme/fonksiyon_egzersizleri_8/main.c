#include <stdio.h>
#include <stdlib.h>

void kiyas(float num1, float num2)
{
    if(num1>num2)
    {
        printf("%.2f > %.2f ",num1,num2);
    }
    else if(num2>num1)
    {
        printf("%.2f > %.2f ",num2,num1);
    }
    else
    {
        printf("%.2f = %.2f",num1,num2);
    }
}


int main()
{

    /* soru:
    kalvyeden girilen iki tamsayýdan buyuk olaný fonksiyon kullanarak bulduran prog. yaz
    */


    float sayi1,sayi2;
    printf("lutfen kiyaslamak istediginiz iki sayiyi girin : \n");
    scanf("%f %f",&sayi1,&sayi2);

    kiyas(sayi1,sayi2);


    return 0;
}
