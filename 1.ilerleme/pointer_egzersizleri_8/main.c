#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int *sayi)
{
    int toplam=1;
    int i;
    for(i=1;i<=*sayi;i++)
    {
        toplam=toplam*i;
    }
    return toplam;

}


int main()
{

    /* soru:
    kullanici tarafindan N poizitif sayinin faktoriyelini hesaplayan kodu yazin
    */

    int sayi;
    printf("hangi sayinin faktoriyelini hesaplamak istersiniz : \n");
    scanf("%d",&sayi);
    int degisken;
    degisken=sayi;
    printf("%d! = %d",degisken,faktoriyel(&sayi));
    return 0;
}
