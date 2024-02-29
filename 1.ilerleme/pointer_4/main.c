#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:

    asagidaki programin ciktisini gosterin

    1   short x,y,*p1,*p2;
    2   x=4;
    3   p1=&x;
    4   y= *p1;
    5   y=8
    6   p2=&y;
    7   (*p1)++;
    8   y=p1;
    9   y++;
    10  p2=12;
    11  p1=y;

    */

    short x,y,*p1,*p2;
    x=4;
    p1=&x;
    y= *p1;
    y=8;
    p2=&y;
    (*p1)++;
    y=p1;
    y++;
    p2=12;
    p1=y;










    return 0;
}
