#include <stdio.h>
#include <stdlib.h>

int main()
{

    // break yapisi:
    /*
    int i;

    for(i=0;i<10;i++)
    {
        if(i==4)
        {
            break;
        }

        printf("%d\n",i);
    }
    */



    //continue yapisi:

    /*
    int i;

    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            continue; // i=5 oldugu durum
        }

        printf("%d\n",i);
    }
*/


//ornek:
//1 den 4 e kadar olan sayilari bastir 5 i atlasin ve 8 de bitsin

    int i= 1;

    for(i;i<=100;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
        if(i==8)
        {
            break;
        }


    }












    return 0;
}
