#include <stdio.h>
#include <stdlib.h>


enum renkler
{
    mavi,
    yesil,
    turuncu,
    kirmizi
};



int main()
{

    /* ENUMERATION:
    tek tip sembolik listelere denir,icindeki ilk deger dizilerdeki gibi 0 degerini
    aliyo ve sonraki elemanlar 1,2,3 diye artiyo
    */

/*
    enum istanbul
    {
        besiktas,
        sisli,
        beyoglu,
        uskudar,
        kadikoy,
        eminonu,
        basaksehir
    };

*/

enum renkler rahmet=kirmizi; // kirmizi degeri 3 esittir
printf("%d",rahmet);







    return 0;
}
