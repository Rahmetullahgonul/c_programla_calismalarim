#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* soru 1:
    while d�ng�s� kullanarak a�a��dakini yazd�r�n
        23 22 21 20 19 ............. 5 4 3 2 1
    */


    /*
    // ��z�m�:

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
    kullan�c�dan giri�i bir n say�s�na kadar olan t�m tam say�lar�n toplam�n�
    hesaplay�p ekrana bast�r
    */




    // ��z�m�:

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
