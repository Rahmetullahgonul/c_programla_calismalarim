#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*soru:
    **while d�ng�s� kullanarak 0 ile kullan�c�dan ald��� n say�s� aras�nda yer alan 17nin
    t�m tam say� katlar�n� ekrana bast�ran bir program yaz�n�z
    ** her sat�rda 10 adet say� g�z�ks�n
    */



    int sayi;
    int satir=0;
    printf("lutfen bir sayi degeri giriniz : \n");
    scanf("%d",&sayi);

    while(sayi>=0)
    {
        if(sayi%17==0)
        {
            printf("%d ",sayi);
            satir = satir +1;
            if(satir%10==0)
            {
                printf("\n");
            }
        }
        sayi = sayi-1;
    }

















    return 0;
}
