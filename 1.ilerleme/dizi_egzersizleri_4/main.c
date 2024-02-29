#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* soru :
    ** kullanicidan bir cumle girmesini isteyin
    ** girilen cumle icindeki harflarin kac kere yazildigini ekrana bastirin
    */

    char cumle;
    int sayma[26]={0};
    int rahmet,karakter,i;
    karakter=0;
    printf("lutfen bir tekst girin ve entere basin : \n");
    while((cumle=getchar())!='\n')
    {
        rahmet=cumle-'a';
        if(rahmet >=0 && rahmet<26)
        {
            sayma[rahmet]++;
            karakter++;
        }

    }
    printf("\ngirdiginiz tekst %d karakter iceriyor\n",karakter);
    for(i=0;i<26;i++)
    {
        printf("%d kez %c\n",sayma[i],'a'+i);
    }


    return 0;
}
