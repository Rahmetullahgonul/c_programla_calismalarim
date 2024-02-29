#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* soru 1:
    while döngüsü kullanarak aþaðýdakini yazdýrýn
        23 22 21 20 19 ............. 5 4 3 2 1
    */


    /*
    // çözümü:

    int x=23;
    int result;
    while(x>0)
    {
        result = x;
        printf("%d ",result);
        x=x-1;
    }
*/




    /* soru 2:
    kullanýcýdan giriði bir n sayýsýna kadar olan tüm tam sayýlarýn toplamýný
    hesaplayýp ekrana bastýr
    */




    // çözümü:

    int x;
    int toplam;
    printf("lutfen bir sayi giriniz \n");
    scanf("%d",&x);

    while(x>0)
    {
        toplam = toplam + x;
        x = x-1;
    }
    printf("%d",toplam);





































    return 0;
}
