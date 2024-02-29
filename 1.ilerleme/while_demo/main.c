#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    kullanicidan bir sayi aliniz ve carpa carpa 10 kez artirarak yazdiriniz
    */


    // benim kodum:
    /*
    int i=1;
    int num;
    int result;
    printf("lutfen bir deger giriniz\n");
    scanf("%d",&num);

    while(i<=10)
    {
        result = num *i;
        printf("%d\n",result);
        i = i+1;
    }
*/

    // hocanin kodu:

    int i=1;
    int sayi;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);

    while(i<=10)
    {
        printf("%d\n",i*sayi);
        i=i+1;
    }

















    return 0;
}
