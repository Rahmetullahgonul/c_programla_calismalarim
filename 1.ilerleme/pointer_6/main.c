#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointer aritmetigi

    int arr[]={10,20,30,40,50};
    int *pointer;

    pointer=arr;

    /*dizinin adresini pointera verdikten sonra sonraki elamanlari artirmak icin
    +1 girilir(normalde intler 2byte ile 16byte arasinda tutsada yine de +1 girilir)
    (+1 dedigimizde aslinda adres kendisi intin byte 'i kadar artmis oluyo)*/

    printf("dizinin 1.elamani = %d\n",*pointer);
    printf("dizinin 1.elamaninin adresi = %d\n",pointer);
    printf("dizinin 2.elamani = %d\n",*(pointer+1));
    printf("dizinin 2.elamaninin adresi = %d\n",pointer+1);
    printf("dizinin 3.elamani = %d\n",*(pointer+2));
    printf("dizinin 3.elamaninin adresi = %d\n",pointer+2);
    printf("dizinin 4.elamani = %d\n",*(pointer+3));
    printf("dizinin 4.elamaninin adresi = %d\n",pointer+3);
    printf("dizinin 5.elamani = %d\n",*(pointer+4));
    printf("dizinin 5.elamaninin adresi = %d\n",pointer+4);

    return 0;
}
