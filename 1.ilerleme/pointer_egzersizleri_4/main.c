#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    kullanýcýya kac elemanli bir sayi dizisi olusturmak istedigini sorun
    pointer kullanarak elamanlari tek tek alin ve konsala basin
    */

    int n;
    printf("kac elemanli bir dizi olusturmak istersiniz : \n");
    scanf("%d",&n);

    int sayi_dizisi[n];
    int i;
    int *ptr;

    ptr=sayi_dizisi;

    printf("lutfen elemanlari giriniz : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    ptr=sayi_dizisi;
    printf("dizinin son hali : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",*ptr);
        ptr++;
    }




    return 0;
}
