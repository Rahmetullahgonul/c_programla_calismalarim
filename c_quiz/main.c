#include <stdio.h>
#include <stdlib.h>
int main() {

//asal sayi bulma algoritmasi:

int a;
printf("lutfen asal olup olmadigini kontrol etmek istediginiz sayiyi giriniz");
scanf("%d",&a);
int i=1;
int counter=0;
    while (a>i)
    {
        if (a%i==0)
        {counter+=1;}
    i-=1;
    }

if counter>1
{
    printf("girdiginiz %d sayisi bir asal sayi degildir",a);
}
else{
    printf("girdiginiz %d sayisi bir asal sayidir",a);
}

return 0;

}
