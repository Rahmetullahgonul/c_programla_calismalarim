#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /* soru:
    ** kullanýcýdan bir karakter dizisi girmesini isteyin
    ** girdiginiz karakter dizisinden istediginiz bie harfin kaldirilmasini isteyin
    ** istediginiz karakter kaldirildiktan sonra diziyi ekrana basin
    */

    char kalkan;
    char rahmet[100];
    char *ptr;
    printf("lutfen bir cumle veya kelime giriniz : \n");
    gets(rahmet);
    printf("hangi karakterin diziden silinmesini istersiniz : \n");
    scanf("%c",&kalkan);


    for(ptr=rahmet;*ptr;ptr++)
    {
        if(*ptr==kalkan)
        {
            strcpy(ptr,ptr+1);
        }
    }

    // yukardaki forun while ile kurulmus hali;

/*
    ptr=rahmet;
    while(*ptr)
    {
        if(*ptr==kalkan)
        {
            strcpy(ptr,ptr+1);
        }
        ptr++;
    }
*/



    printf("%s",rahmet);







    return 0;
}
