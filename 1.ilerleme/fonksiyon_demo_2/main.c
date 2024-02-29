#include <stdio.h>
#include <stdlib.h>


    float fonksiyon(float sayi)
    {
        printf("fonksiyonun sonucu = %.3f",sayi*sayi*sayi+13*sayi*sayi+47*sayi+5);
    }

int main()
{

    /*soru 1:
    kullanýcý tarafýndan girilen reel bir sayýnýn aþaðýdaki fonksiyona göre deðerini
    ekrana bastýrýn
    f(x)=x^3 + 13x^2 + 47x + 5
    */



/*
    //çözümü:

    float sayi;
    printf("lutfen fonksiyona sokmak istediginiz degeri giriniz : \n");
    scanf("%f",&sayi);

    printf("fonksiyonun sonucu = %.3f",sayi*sayi*sayi+13*sayi*sayi+47*sayi+5);

*/


    // fonksiyon kullanarak çözümü:


    float sayi;
    printf("lutfen fonksiyona sokmak istediginiz degeri giriniz : \n");
    scanf("%f",&sayi);

    fonksiyon(sayi);




    return 0;
}
