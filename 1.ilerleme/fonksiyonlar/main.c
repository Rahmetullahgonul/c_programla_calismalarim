#include <stdio.h>
#include <stdlib.h>

    // fonksiyon a�ma
    // geriye deger dondurmedgi icin void kulland�k
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

    // sayi tek mi �ift mi

    //�u ana kadar ��rendi�imiz bilgi ile;

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
    // fonksiyon a�ma
    // geriye deger d�nmeyece�inden void kullan�caz
    tekmiciftmi(num);































    return 0;
}
