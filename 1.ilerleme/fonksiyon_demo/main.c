#include <stdio.h>
#include <stdlib.h>

    //fonksiyonla yazma


    float islemyaptirma(char islem, float num1, float num2)
    {
        if(islem == '+')
        {
            printf("%.2f",num1+num2);
        }
        else if(islem =='-')
        {
            printf("%.2f",num1-num2);
        }
        else if(islem == '*')
        {
            printf("%.2f",num1*num2);
        }
        else if(islem == '/')
        {
            printf("%.2f",num1/num2);
        }
        else{
            printf("girdiginiz degerlerde hata var\n");
        }
    }



int main()
{

    /*klavyeden girilen iki tam sayýnýn toplamýný,farkýný,carpýmýný ve bölümünü
    gerçekleþterilen kodu fonksiyon kullanmadan ve fonksiyon kullanarak yazýn
    */

    //fonksiyonsuz;


    /*
    float num1,num2;
    char islem;

    printf("hangi islemi yaptirmak istersiniz (+ - * /) \n");
    scanf("%c",&islem);

    printf("lutfen iki adet sayi giriniz \n");
    scanf("%f %f",&num1,&num2);

    if(islem == '+')
    {
        printf("%.2f",num1 + num2);

    }
    else if(islem == '-')
    {
        printf("%.2f",num1 - num2);
    }
    else if(islem == '*')
    {
        printf("%.2f",num1 * num2);
    }
    else if(islem == '/')
    {
        printf("%.2f",num1 / num2);
    }
    else{
        printf("yanlis bir deger girdiniz");
    }
*/


    // fonksiyonla

    float num1, num2;
    char islem;

    printf("hangi islemi yaptirmak istersiniz (+ - * /) \n");
    scanf("%c",&islem);

    printf("lutfen iki adet sayi giriniz \n");
    scanf("%f %f",&num1,&num2);

    islemyaptirma(islem,num1,num2);



















    return 0;
}
