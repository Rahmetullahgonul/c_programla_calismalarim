#include <stdio.h>
#include <stdlib.h>

int main()
{


    int rahmet[2][3][4]={{{3,4,2,3},{0,-3,9,11},{23,12,23,2}},
    {{3,4,5,6},{-1,-2,-3,-4},{21,22,23,24}}};

    printf("%d",rahmet[1][1][2]);
    //degerleri update etmek istersem:
    // ornegin 24 degerini 34 ile degişelim:

    rahmet[1][2][3]=34;
    printf("%d",rahmet[1][2][3]);










    return 0;
}
