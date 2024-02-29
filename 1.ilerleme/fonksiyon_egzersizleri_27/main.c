#include <stdio.h>
#include <stdlib.h>

void hesap(int son_sayi)
{
    int i;
    int toplam=0;

    printf("tum seri : \n");
    for(i=1;i<=son_sayi;i++)
    {
        toplam=toplam + i*i;
        printf(" %d^2 +",i);
    }
    printf("\n serinin toplami = %d",toplam);

}



int main()
{

    /* soru:
    asaðýdaki verilen serinin hesaplanmasýný saðlayan c programýný yazýn
    1^2 + 2^2 + 3^2 + 4^2...
    */

    int son_sayi;
    printf("hangi sayiya kadar hesaplama yapmak istersiniz : \n");
    scanf("%d",&son_sayi);

    hesap(son_sayi);

    return 0;
}
