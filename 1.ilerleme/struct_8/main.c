#include <stdio.h>
#include <stdlib.h>


typedef enum
{
    ocak=1,//ocaga 1 verdigim icin siralama 1,2,3,...12 diye gidiyo
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik
} aylar;


void ayi_goster(aylar canan)
{
    switch (canan)
    {
    case ocak:
        printf("ocak");
        break;
    case subat:
        printf("subat");
        break;
    case mart:
        printf("mart");
        break;
    case nisan:
        printf("nisan");
        break;
    case  mayis:
        printf("mayis");
        break;
    case haziran:
        printf("haziran");
        break;
    case temmuz:
        printf("temmuz");
        break;
    case agustos:
        printf("agustos");
        break;
    case eylul:
        printf("eylul");
        break;
    case ekim:
        printf("ekim");
        break;
    case kasim:
        printf("kasim");
        break;
    case aralik:
        printf("aralik");
        break;
    default:
        printf("boyle bir ay bulunmamaktadir");
        break;
    }
}

int main()
{


    /* soru:
    ** yilin aylarini gosteren bir enum hazirlayin
    ** ayni þekilde aldigi parametreye gore yilin ayini donduren bir fonksiyon yazin
    */

    aylar rahmet=temmuz; // buraya ayin int degerini de girebilirsin 7 = temmuz
    ayi_goster(rahmet);


    return 0;
}
