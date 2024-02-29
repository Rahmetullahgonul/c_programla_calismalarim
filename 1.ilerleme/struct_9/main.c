#include <stdio.h>
#include <stdlib.h>

union test
{
    int x,y;
};
int main()
{

                                //UNIONS

/*
** struct ve unions birbirine benzer ancak farkliliklari da vardir
stract hafizada girilen her deger icin ayri yer tutarken unions girilen en buyuk
byte turu olan degere gore hafizada bir yer acar ve girilen tum degerleri orada
depolar
*/

    union test t;

    t.x=2;
    printf("%d\n",t.x);
    printf("unionumuz hafizada %d byte kadar yer tutar \n",sizeof(t));
    t.y=6;
    printf("%d\n",t.y);
    printf("%d\n",t.x); // x in degeri normalde 2 olmasina ragmen 6 basiliyo
    printf("unionumuz hafizada %d byte kadar yer tutar \n",sizeof(t));

    return 0;
}
