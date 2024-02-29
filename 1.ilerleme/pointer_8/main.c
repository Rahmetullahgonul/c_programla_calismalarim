#include <stdio.h>
#include <stdlib.h>

int main()
{

    // char isim[20]="bonjour";
    char isim[20]={'b','o','n','j','o','u','r','\0'};
    char *rahmet;

    rahmet=isim;
/*
    printf("dizinin 1.karakteri : %c \n",*rahmet);
    printf("dizinin 2.karakteri : %c \n",*(rahmet+1));
    printf("dizinin 3.karakteri : %c \n",*(rahmet+2));
    printf("dizinin 4.karakteri : %c \n",*(rahmet+3));
*/

    int i;
    for(i=0;i<7;i++)
    {
        printf("dizinin %d.karakteri : %c\n",i+1,*(rahmet+i));
    }


    return 0;
}
