#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define circleArea(r) (PI*r*r)

int main()
{
    printf("File :%s\n",__FILE__);//dosya konumunu verir
    printf("Date :%s\n",__DATE__);//tarihi verir
    printf("Time :%s\n",__TIME__);//saati verir
    printf("Line :%d\n",__LINE__);//satýrý verir
    printf("STDC :%d\n",__STDC__);//programlama için olan bi standartmýþ



    return 0;
}
