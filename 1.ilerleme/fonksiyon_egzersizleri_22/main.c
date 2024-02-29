#include <stdio.h>
#include <stdlib.h>


float karekok(float girilen_sayi)
{
    int i;
    float kare;
    if(girilen_sayi>0)
    {
        kare=girilen_sayi/2;
        for(i=1; i<=50; i++)
        {
            kare = ((kare*kare)+girilen_sayi/(2*kare));
        }
        return kare;

    }
    else if(girilen_sayi==0)
    {
        return 0;
    }
    else
    {
        printf("lutfen gecerli bir deger giriniz ");
    }

}



int main()
{
    /* soru:
    kullanýcý tarafýndan girilen bir N pozitif tamsayýsýnýn karekökünün bulnmasýný
    saðlayan(sqrt()kullanmadan) c programýný yazýn;
    K=A/2
    karakök=toplam 1 den 50 ye kadar k^2+A/2k
    */

    float kok;
    printf("karakoku alinacak sayi : \n");
    scanf("%f",&kok);
    printf("%.1f sayisinin karekoku = %.1f",kok,karekok(kok));
    return 0;
}
