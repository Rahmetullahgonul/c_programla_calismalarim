#include <stdio.h>
#include <stdlib.h>


    int faktoriyel(int sayim)
    {
        int i;
        int result=1;

        for(i=1;i<=sayim;i++)
        {
            result = result*i;
        }

        return result;
    }






int main()
{
    /* soru :
    klavyeden girilen bir tamsay�n�n faktoriyelini fonksiyon kullanarak yapt�r�n
    */

    int sayi;
    printf("faktoriyelini ogrenmek istediginiz sayiyi giriniz : \n");
    scanf("%d",&sayi);


    printf("%d! = %d",sayi,faktoriyel(sayi));


    return 0;
}
