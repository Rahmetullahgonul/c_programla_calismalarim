#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*soru:
    kullan�c� taraf�ndan girilen iki tam say�n�n �arp�m�n�n i�aretini(pozitif negatif)
    say�lar� �arpmadan bulan bi program yaz�n
    */



    //��z�m�

    int num1,num2;
    printf("lutfen iki adet tam sayi giriniz :\n");
    scanf("%d %d",&num1,&num2);

    if(num1>0 && num2>0)
    {
        printf(">>(%d*%d) = pozitif(+1)",num1,num2);
    }
    else if(num1<0 && num2<0)
    {
        printf(">>(%d*%d) = pozitif(+1)",num1,num2);
    }
    else if(num1>0 && num2<0)
    {
        printf(">>(%d*%d) = negatif(-1)",num1,num2);
    }
    else if(num1<0 && num2>0)
    {
        printf(">>(%d*%d) = negatif(-1)",num1,num2);
    }
    else if(num1==0 || num2==0)
    {
        printf(">>(%d*%d) = (0)",num1,num2);
    }
    else{
        printf("girdiginiz degerlerde bi hata meydana geldi");
    }









    return 0;
}
