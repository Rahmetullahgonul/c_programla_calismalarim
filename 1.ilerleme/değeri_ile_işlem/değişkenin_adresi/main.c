#include <stdio.h>
#include <stdlib.h>


    /*
    //degerle yapma :

    void kare(int rahmet)
    {

    int sonuc = rahmet*rahmet;
    return sonuc;

    }
    */



    //adresle yollama :

     void kare(int *sonuc, int *rahmet)
    {

    sonuc = *rahmet**rahmet;






int main()
{


    /*
    //degerle yapma:
    int x=4;
    int karesi;

    karesi=kare(x);
    printf("%d",karesi);
    */



    // adresle yollama:

    int x=4;
    int karesi;
    int sonucum;

    kare(&sonucum,&x);
    printf("%d",sonucum);
























    return();
}

