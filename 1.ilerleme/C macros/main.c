#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define circleArea(r) (PI*r*r)

int main()
{
    float yaricap,alan;

    printf("lutfen yaricap degerini giriniz \n");
    scanf("%f",&yaricap);
    alan =circleArea(yaricap);
    printf("cemberin alan� : %.3f",alan);




    return 0;
}
