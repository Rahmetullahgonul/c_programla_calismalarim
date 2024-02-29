#include <stdio.h>
#include <stdlib.h>


    int us(int num1, int num2)
    {
        int i;
        int result=1;
        for(i=1;i<=num2;i++)
        {
            result=result*num1;
        }
    return result;
    }



int main()
{

    /* soru:
    klavyeden taban ve üs değerini a^b şeklindeki bir işlemin sonucunu fonksiyon
    kullanarak hesaplayan ve ekrana basan programı yazın
    */



    int num1,num2;
    printf("lutfen taban degerini girin : \n");
    scanf("%d",&num1);
    printf("lutfen us degerini girin : \n");
    scanf("%d",&num2);

   printf("%d ^ %d = %d",num1,num2,us(num1,num2));
























    return 0;
}
