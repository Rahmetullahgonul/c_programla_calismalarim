#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru
    karmasik bir sayi a+ib seklinde olup a degeri sayinin gercel kismini;b degeri
    ise sanal kismini olusturur bir karmasik sayiyi gercel ve sanal kisimdan
    olusan bir yapi olarak tanimlayiniz daha sonra iki karmasik sayiyi ve toplama
    cikarma operatorunu girdi olarak aliniz toplama ya da cikarma islemini
    yaparak sonucu bu yapida tanimlanmis bir baska degiskende saklayiniz ve ekrana
    basin

    ornek:
    birinci karmasik sayi: 2.0 3.0
    ikinci karmasik sayi: 5.0 -4.5
    operator(+/-):+
    sonuc 7.00-1.50i
*/


    struct karmasik_sayi
    {
        float a,b;

    };

    int main()
    {
        struct karmasik_sayi sayi1,sayi2,sonuc;

        char oper;
        printf("lutfen yapmak istediginiz islemi girin \n");
        scanf("%c",&oper);

        printf("1.karmasik sayi : \n");
        scanf("%f%f",&sayi1.a,&sayi1.b);

        printf("2.karmasik sayi : \n");
        scanf("%f%f",&sayi2.a,&sayi2.b);

        if(oper=='+')
        {
            sonuc.a=sayi1.a+sayi2.a;
            sonuc.b=sayi1.b+sayi2.b;

        }
        else if(oper=='-')
        {
            sonuc.a=sayi1.a-sayi2.a;
            sonuc.b=sayi1.b-sayi2.b;
        }
        else{
            printf("lutfen dogru degerler giriniz ");
        }
        printf("sonuc : \n");
        printf("%.2f",sonuc.a);

        if(sonuc.b>=0)
        {
            printf("+ %.2f i",sonuc.b);
        }
        else{

            printf("%.2f i",sonuc.b);
        }
            return 0;
    }










    return 0;
}
