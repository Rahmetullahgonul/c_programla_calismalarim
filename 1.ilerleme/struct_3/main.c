#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
    char ad[15];
    char soyad[15];
    int yas;
};


int main()
{
/*
    struct ogrenci rahmetullah;

    //1.atama yontemi(strcpy)

    strcpy(rahmetullah.ad,"rahmetullah");
    strcpy(rahmetullah.soyad,"gonul");
    rahmetullah.yas,21;

    printf("%s %s adli ogrencinin yasi %d dir \n",rahmetullah.ad,rahmetullah.soyad,rahmetullah.yas);
*/

    //2.atama yontemi

    struct ogrenci rahmetullah={"rahmetullah","gonul",21};

    printf("%s %s adli ogrencinin yasi %d dir \n",rahmetullah.ad,rahmetullah.soyad,rahmetullah.yas);








    return 0;
}
