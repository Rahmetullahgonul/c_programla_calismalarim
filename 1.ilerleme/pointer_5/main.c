#include <stdio.h>
#include <stdlib.h>

int main()
{


    // pointer ve diziler

    char can[100]="canan"; //ilk elamanın adresine esit
    char *p1;

    p1=can;

    printf("5.karakterim %c dir\n",can[4]);
    /* p1 i canin adresine esitledik
    canin adresi ilk degerin adresine esit oldugu icin +3 dersek 4.karaktere
    ulasiriz*/
    printf("1.karakterim %c dir \n",*p1);
    printf("4.karakterim %c dir\n",*(p1+3));











    return 0;
}
