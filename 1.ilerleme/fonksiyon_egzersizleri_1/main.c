#include <stdio.h>
#include <stdlib.h>


    void toplam_bulma(int num1, int num2)
    {
        int toplam=0;
        toplam = num1 + num2;
        printf("%d + %d = %d",num1,num2,toplam);
    }






int main()
{

    /* soru:
    klavyeden girilen iki tam sayinin toplamýný fonksiyon kullanarak yazin
    */


    int num1,num2;
    printf("lutfen iki adet tamsayi giriniz : \n");
    scanf("%d %d",&num1,&num2);
    toplam_bulma(num1,num2);







    return 0;
}
