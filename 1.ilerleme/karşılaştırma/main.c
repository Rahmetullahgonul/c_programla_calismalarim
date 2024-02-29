#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Comparison Operators
    == != < > <= >=
    */
    int sayi1 = 10;
    int sayi2 = 10;
    int sayi3 = 20;
    int result;

    result = (sayi1 == sayi2);
    result = (sayi1 == sayi2);
    result = (sayi3 > sayi2);
    result = (sayi3 <= sayi1);
    result = (sayi2 != sayi1);


    printf("%d",result);


    return 0;
}
