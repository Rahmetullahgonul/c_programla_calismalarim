#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int day=6;
    switch(day)
    {
        case 1:printf("pazartesi");
        break;
        case 2:printf("sali");
        break;
        case 3:printf("carsamba");
        break;
        case 4:printf("persembe");
        break;
        case 5:printf("cuma");
        break;
        case 6:printf("cumartesi");
        break;
        case 7:printf("pazar");
        break;
        default:printf("gecersiz gun");
        break;
    }

    */


    //ifle yazmak istersek:

    int day = 5;

    if(day==1)
    {
        printf("pazartesi");
    }
    else if(day==2)
    {
        printf("sali");
    }
    else if(day==3)
    {
        printf("carsamba");
    }
    else if(day==4)
    {
        printf("persembe");
    }
    else if(day==5)
    {
        printf("cuma");
    }
    else if(day==6)
    {
        printf("cumartesi");
    }
    else if(day==7)
    {
        printf("pazar");
    }
    else
    {
        printf("girdiginiz gun gecersizdir");
    }













    return 0;
}
