#include <stdio.h>
#include <stdlib.h>

void boy(char cumle[100],int *rahmet)
{
    int i;
    for(i=0;rahmet[i]!='\0';i++);
    *rahmet=i;
    return *rahmet;
}

void ortak_harf(char tab[100],char can[100],int *t)
{
    int i,j;
    int kelime1,kelime2;
    *t=0;

    boy(tab,&kelime1);
    boy(can,&kelime2);

    for(i=0;i<kelime1;i++)
    {
        for(j=0;j<kelime2;j++)
        {
            if(tab[i]==can[j])
            {
                *t=*t+1;
            }
        }
    }
}


int main()
{


    /* soru:
    ** 2 adet fonksiyon yazin
    ** karakter dizisinin boyunu hesaplayan bþr fonksiyon yazin(adresiyle cagirin)
    ** 2 kelimenin ortak harf sayisini hesaplayan ve bunu adresle gonderen bir
    fonksiyon yazin
    ** kullanýcýdan 2 kelime girmesini isteyin daha sonra yukardaki fonksiyonlari
    kullanarak ilk girilen karakter dizisinin boyunu kullanicidan 2 kelime girmesini
    ve 2 kelime arasinda ortak olan harf sayisini ekrana bastiran bir c programi yaz
    */

    int i=0;
    int a,r;
    char cumle[100],tab[100];
    printf("lutfen bir cumle veya kelime giriniz : \n");
    do
    {
        scanf("%c",&cumle[i]);
        i++;
    }
    while(cumle[i-1]!='\n');
    cumle[i-1]='\0';
    boy(cumle,&a);
    printf("dizimizin boyu %d kadardir \n",a);

    printf("lutfen iki kelime giriniz : \n");
    scanf("%s %s",cumle,tab);

    ortak_harf(cumle,tab,&r);
    printf("%s ve %s %d kadar ortak karaktere sahiptir \n",cumle,tab,r);


    return 0;
}
