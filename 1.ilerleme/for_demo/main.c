#include <stdio.h>
#include <stdlib.h>

int main()
{
 //kullan�c�dan bir de�er girmesinin isteyiniz 1 den girece�iniz say�ya kadar olan
 //say�lar�n toplam�n� for d�ng�s�yle hesaplay�n�z

    int i;
    int num = 1;
    int result = 0;
    printf("lutfen bir deger giriniz""\n");
    scanf("%d",&i);

    for(num;num<=i;num++)
    {
       result = result + num;
    }

    printf("%d",result);





































    return 0;
}
