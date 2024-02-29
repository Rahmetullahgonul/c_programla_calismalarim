#include <stdio.h>
#include <stdlib.h>


void donusturucu(char karakter,int derece)
{
    int sonuc;
    if(karakter=='c'||karakter=='C')
    {
        sonuc=(1,8*derece)+32;
        printf("%d derece %d fayrenayta esittir",derece,sonuc);
    }
    else if(karakter=='F'||karakter=='f')
    {
        sonuc=(0.55)*(derece-32);
        printf("%d fayrenayt %d dereceye esittir",derece,sonuc);
    }
    else
    {
        printf("lutfen dogru bir islem giriniz");
    }
}

int main()
{

    /*soru:
    kullanýcý tarafýndan derece olarak girilen bir degerin fayrenayt'a, fayrenayt olarak
    girilen bir degerin dereceye dönüþtürülmesini saðlayan c programýný yazýn

    f=(1.8*c)+32          c=(5/9)*(f-32)
    */

    char karakter;
    int derece;
    printf("lutfen donusturmek istediginiz degerin bas harfini giriniz (C/F)(c/f) :\n");
    scanf("%c",&karakter);
    printf("lutfen donusturmek istediginiz sayi degerini giriniz : \n");
    scanf("%d",&derece);
    donusturucu(karakter,derece);
    return 0;
}
