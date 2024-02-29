#include <stdio.h>
#include <stdlib.h>

    // fonksiyon açma
    // geriye deger dondurmedgi icin void kullandýk
    // geriye donenler icin ne donecekse onu yaz(int,float vb.)
    void tekmiciftmi(int num)
    {
        if(num%2==0)
        {
            printf("girdiginiz %d sayisi bir cift sayidir.\n",num);
        }
        else
        {
            printf("girdiginiz %d sayisi bir tek sayidir.\n",num);
        }
    }




int main()
{

    // sayi tek mi çift mi

    //þu ana kadar öðrendiðimiz bilgi ile;

    /*
    int num;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("girdiginiz %d sayisi bir cift sayidir.\n",num);
    }
    else{
        printf("girdiginiz %d sayisi bir tek sayidir.\n",num);
    }
*/

    int num;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&num);
    // fonksiyon açma
    // geriye deger dönmeyeceðinden void kullanýcaz
    tekmiciftmi(num);































    return 0;
}
