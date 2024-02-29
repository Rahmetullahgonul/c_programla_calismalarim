#include <stdio.h>
#include <stdlib.h>

    struct nokta
    {
        float x_ekseni;
        float y_ekseni;
    };



int main()
{
    /* soru:
    ** nokta adinda bir struct olusturun ABS(x dogrusu uzerindeki yeri) ORD(y dogrusu
    ustundeki yeri) bu degerleri float turunde yapin
    ** p adinda bir nokta olusturun
    p noktasinin ABS = 3, ORD = 2 atamasi yapin
    printf icinde p noktasini ekrana yazi
    */


    struct nokta rahmet;
    rahmet.x_ekseni = 3;
    rahmet.y_ekseni = 2;

    printf("x ekseni = %.2f \t y ekseni = %.2f",rahmet.x_ekseni,rahmet.y_ekseni);







    return 0;
}
