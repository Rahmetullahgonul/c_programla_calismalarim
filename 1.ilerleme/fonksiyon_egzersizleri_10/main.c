#include <stdio.h>
#include <stdlib.h>


void sayibastirma(int sayi)
{
    int i=1;
    printf("Tek sayilar : \n");

    while(i<=sayi)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
        else
        {
            printf("\n");
        }
        i=i+1;
    }


}



int main()
{


    /*soru :
    klavyeden girilen pozitif bir N tamsayisina kadar olan tek sayýlarý ekrana listeleyen
    programý fonksiyon kullanarak yazin
    */


    int num;
    printf("lutfen pozitif bir tamsayi giriniz : \n");
    scanf("%d",&num);

    sayibastirma(num);




    return 0;
}
