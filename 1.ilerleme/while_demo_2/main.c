#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 0 dan 10 a kadar olan tek ve cift sayilari ekrana bastir

    int i=0;
    int num=0;

    while(i<=10)
    {
        if(num%2==0)
        {
            printf("girilen sayi cift : %d\n",num);
        }
        else
        {
            printf("girilen sayi tek : %d\n",num);
        }
        i = i+1;
        num = num +1;
    }









    return 0;
}
