#include <stdio.h>
#include <stdlib.h>
int main()
{

//https://www.researchgate.net/profile/Deniz-Gezgin/publication/347508715_Aciklamali_Algoritma_Ornek_Sorulari_ve_Cozumleri/links/5fdf09d545851553a0d63b60/Aciklamali-Algoritma-Oernek-Sorulari-ve-Coezuemleri.pdf***
//bu siteden de sorular var


/*
• Write an algorithm to determine a student’s final grade .
• Note That:
– Indicate whether it is passing or failing
• If the final grade is greater than or equal to 50 the
result is PASS; otherwise, FALL.
– The final grade is calculated as the average of four
marks.
– Firstly, Write the pseudocode of the algorithm
– Secondly, Draw the flowchart of the algorithm
*/
/*


int avr,ex1,ex2,ex3,ex4;
printf("4 not gir:");
scanf("%d %d %d %d",&ex1,&ex2,&ex3,&ex4);
avr=(ex1+ex2+ex3+ex4)/4;
if(avr>=50)
{
    printf("Pass");
}
else{
    printf("Fall");
}
*/
//------------------------------------------------------------

/*Write an algorithm that find biggest among two numbers.
Note That:
– Firstly, write the pseudocode of the algorithm.
– Secondly, draw the flowchart of the algorithm.
– The numbers must be entered by the user.
– Display the largest value with an identifying message.
• Like: The largest value is …..
*/

/*
int num1,num2;
int big;
printf("enter 2 numbers:");
scanf("%d %d",&num1,&num2);
if(num1>num2)
{
    big=num1;
}
else{
    big=num2;
}
printf("The largest number is %d",big);
*/

/*
int num1,num2;
printf("enter 2 numbers:");
scanf("%d %d",&num1,&num2);
if(num1>num2)
{
    printf("the largest number is %d",num1);
}
else{
    printf("the largest number is %d",num2);
}
*/
//------------------------------------------------------------

/*
Write an algorithm that finds the largest number among three numbers.
Note that:
• The numbers must be entered by the user.
• You must assign the numbers to the variables called as
• N1, N2, N3 and MAX for the biggest number.
• You must only use IF statement.
• All of IF statements has only one condition NOT including
logical operators.
• Store the value of the largest number into a storage device.
• Firstly, write the pseudocode of the algorithm.
• Secondly, draw the flowchart of the algorithm
*/
/*

int n1,n2,n3,max;
printf("enter 3 numbers:");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2)
{
    if(n1>n3)
    {
        max=n1;
    }
}
else if(n2>n3)
{
    max=n2;
}
else{
    max=n3;
}
printf("the biggest number among %d %d %d is %d",n1,n2,n3,max);
*/
//------------------------------------------------------------
/*
Write an algorithm that to find the sum of the first 50 natural numbers.
Note that:
• You must use only two variables called as “counter” and “sum”
for the counter and addition, respectively.
• You must use the WHILE loop.
• Display the sum on the screen.
*/

/*
int counter=1,sum=0;
while(counter<=50)
{
    sum=sum+counter;
    counter=counter+1;
}
printf("toplam = %d",sum);
*/
//-----------------------------------------------------------
/*
Draw a flowchart to take a positive integer from user and calculate the
factorial of that number.
Note that:
• Assign the positive number entered by the user to the variable “N”
• You must use a variable called as “Fact” that indicates the factorial
of that number.
• You must use FOR loop.
• Display the result on the screen.
• Firstly, write the pseudocode for the algorithm.
• Secondly, draw the flowchart of the algorithm
*/
/*
int num;
printf("enter a number:");
scanf("%d",&num);
int i,fact=1;
for(i=1;i<=num;i++)
{
    fact=fact*i;
}
printf("%d!=%d",num,fact);
*/
//-----------------------------------------------------------

/*
kalan kismini kontrol etmek icin float mantigi
*/

/*
int num1=15,num2=4;
//float res=num1/num2 ==>3 ciktisi verir
float res=(float)num1/num2; //==> 3.75 ciktisi verir
printf("%f",res);

*/
//-----------------------------------------------------------
/*
Write a program in C to find whether a number is even
or odd.
Note That:
• The number must be entered by the user.
• You must use the mod operator.
*/
/*
int num;
printf("enter a num");
scanf("%d",&num);
if(num%2==0)
{
    printf("%d is a even number",num);
}
else{
    printf("%d is a odd number",num);
}
*/

//-----------------------------------------------------------
/*
Write a C Program to find greatest of three numbers
Note That:
• Three input integer numbers from the user
• Returns the greatest number as output.
• Use a simple if-elseif-else block.
• The output must be like:
*/
/*
int num1,num2,num3,max;
printf("enter 3 numbers:");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2)
{
    if(num1>num3)
    {
        max=num1;
    }
}
else if(num2>num3)
{
    max=num2;
}
else{
    max=num3;
}
printf("The largest number among %d %d %d is %d",num1,num2,num3,max);
*/

//-----------------------------------------------------------
/*
Write a C Program to find the Sum of First n Natural numbers.
Note That:
• Declare a variable called as “N” that is entered by the user.
• Declare a variable called as “sum” that calculate the sum of the numbers
from 1 to the number “N”.
• Firstly, you must use FOR loop for finding the sum.
• Secondly, you must use WHILE loop for finding the sum
• The output must be like
*/

/*
int num,sum=0;
printf("enter a number");
scanf("%d",&num);
int i=1;


//for
for(i=1;i<=num;i++)
{
    sum=sum+i;
}
printf("%d",sum);


//while
while(num>=i)
{
    sum=sum+i;
    i=i+1;
}
printf("%d",sum);
*/
//-----------------------------------------------------------
/*
Write a C Program as given below instructions:
• First: Find the Number of Integers Divisible by 5 in the range of [1,15].
• Second: Find the sum of all integers that are divisible by 5 in the given
range.
Note That:
• Declare a variable called as “count” that indicates the number of integers
divisible by 5 in the given range.
• Declare a variable called as “sum” that calculate the sum of all the integers
that are divisible by 5.
• You must use FOR loop.
• The output must be like:
*/
/*
int count=0,sum=0;
int i=1;
for(i=1;i<=15;i++)
    if(i%5==0)
    {
        count=count+1;
        sum=sum+i;
    }
printf("The count is %d\nThe sum is %d",count,sum);
*/

//-----------------------------------------------------------
/*
Write a C Program to Calculate the arithmetic mean of 5 numbers.
Note That:
• Declare five variables called as “n1, n2, n3, n4, n5” that indicates the given
numbers from the user.
• Declare a variable called as “sum” that calculates the sum of all the integer
numbers.
• Declare a variable called as “avr” which calculates the arithmetic mean of
the numbers
*/
/*

int n1,n2,n3,n4,n5,sum;
float avr;
printf("enter 5 numbers:");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
sum=n1+n2+n3+n4+n5;
avr=sum/5;
printf("sum is %d\navarage is %f",sum,avr);
*/
//-----------------------------------------------------------

/*
Write a C Program to Calculate the sum of the input numbers from the user
until the user enters a zero or a negative number.
Note That:
• Declare a variable called as “sum” that calculates the sum of all the integer
numbers.
• You must use WHILE loop
*/
/*
int num,sum=0;
while(1)
{
    printf("enter number:");
    scanf("%d",&num);
    if(num>0)
    {
        sum=sum+num;
    }
    else
    {
        break;
    }
}
printf("The sum is %d",sum);
*/
//-----------------------------------------------------------
/*
. Kullanıcının girdiği iki sayının karelerinin toplamını görüntüleyen
programın algoritma ve akış diyagramını çiziniz.
*/
/*
int num1,num2;
printf("enter 2 numbers:");
scanf("%d %d",&num1,&num2);
printf("ilk sayinin karesi = %d\nikinci sayinin karesi=%d\n",(num1*num1),(num2*num2));
printf("toplamlari = %d",(num1*num1)+(num2*num2));
*/

//-----------------------------------------------------------
/*
1'den 100'e kadar olan sayılarının küplerinin toplamını bulan
programın algoritma ve akış diyagramını çiziniz
*/
//for
/*
int i=1,sum=0;
for(i=1;i<=100;i++)
{
    sum=sum+(i^3);
}
printf("1 den 100 e kadar olan sayilarin kuplerinin toplami:%d",sum);
*/
/*
//while
int i=1,sum=0;
while(i<=100)
{
    sum=sum+(i*i*i);
    i=i+1;
}
printf("1 den 100 e kadar olan sayilarin kuplerinin toplami:%d",sum);
*/

//-----------------------------------------------------------

/*
Girilen sayının faktöriyelini bulan programın algoritma ve akış
diyagramını çiziniz
*/
/*
int num,fact=1;
printf("enter a number:");
scanf("%d",&num);
for(num;num>=1;num--)
{
    fact=fact*num;
}
printf("%d!=%d",num,fact);
*/

//-----------------------------------------------------------
/*
Girilen sayının 5'in kuvveti olup olmadığını bulan programın
algoritma ve akış diyagramını çiziniz.
*/
/*
int num;
printf("enter a number:");
scanf("%d",&num);
if(num%5==0)
{
    printf("sayi 5 in bir katidir");
}
else{
    printf("sayi 5 in bir kati degildir");
}
*/

//-----------------------------------------------------------

/*
X,Y pozitif olmak üzere, eğer x sayısının çarpanları toplamı y sayısına
ve aynı zamanda y sayısının çarpanları toplamı x sayısına eşit ise bu
sayılar dost sayılardır. Buna göre girilen iki sayının dost olup
olmadığını bulan programın algoritma ve akış diyagramını çiziniz
(kendi degerleri haric)
*/
/*
int x,y;
printf("X'in degerini girin:");
scanf("%d",&x);
printf("Y'nin degerini girin:");
scanf("%d",&y);
int sumForX=0,sumForY=0;
int i;
for(i=1;i<x;i++)
    if(x%i==0)
    {
        sumForX=sumForX+i;
    }

for(i=1;i<y;i++)
    if(y%i==0)
    {
        sumForY=sumForY+i;
    }

if(sumForX==sumForY)
{
    printf("%X=d sayisi ile Y=%d sayisinin carpanlarinin toplami birbirine esit ve %d dir",x,y,sumForX);
}
else{
    printf("X=%d sayisinin carp top=%d\nY=%d sayisinin carp top=%d",x,sumForX,y,sumForY);
}
*/


//-----------------------------------------------------------
/*
int N,sum=0;
printf("enter N:");
scanf("%d",&N);
while(N>=1)
{
    if(N%2==0)
    {
    sum=sum+N;
    printf("%d\n",N);
    }
    N=N-1;
}
printf("total = %d",sum);
*/


//-----------------------------------------------------------
/*
int i=1,sum=0;
while(i<=100)
{
    if(i%2==0 && i%5==0)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    i=i+1;
}
printf("toplamlari = %d",sum);
*/
//-----------------------------------------------------------
/*

Dışardan girilen n sayısına kadar olan sayıların
toplamını veren c programı.
*/
/*
int n,sum=0;
printf("enter a number");
scanf("%d",&n);
while(1<=n)
{
    sum=sum+n;
    n=n-1;
}
printf("total = %d",sum);
*/

//-----------------------------------------------------------

/*
Yarı çapı dışardan girilen bir dairenin çevresini ve
alanını bulan c programı.
*/
/*

int yaricap;
float pi=3.14;
printf("yaricapi girin:");
scanf("%d",&yaricap);

//alan=pi*r^2
float alan;
alan=pi*(yaricap*yaricap);
//cevre=2*pi*r
float cevre;
cevre=2*pi*yaricap;
printf("yaricapi %d olan daire icin;\nAlan=%.2f\nCevre=%.2f",yaricap,alan,cevre);
*/


//-----------------------------------------------------------
/*
Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların
toplamını bulan c programı.
*/
/*
int number,sum=0;
printf("enter a number:");
scanf("%d",&number);
while(number>=1)
{
    if(number%2!=0)
    {
        printf("%d\n",number);
        sum=sum+number;
    }
    number=number-1;
}
printf("total = %d",sum);
*/

//-----------------------------------------------------------
/*
Dışardan girilen n adet sayının aritmetik sayının aritmetik ortalamasını
bulan c programı
*/

/*

//yapamadim
int n,sum=0;
printf("enter number(s):");
do
while(n>=1)
{
    scanf("%d",&n);
    sum=sum+n;
    n=n-1;
}
printf("%d",sum);

*/

//-----------------------------------------------------------

/*
*
**
***
****
*****
*/

/*
int i=1,j=1;
while(i<=5)
{
    while(j<=i)
    {
        printf("*");
        j=j+1;
    }
    printf("\n");
    j=1;
    i=i+1;
}
*/
//-----------------------------------------------------------

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
int i=1,j=1;
while(i<=5)
{
    while(j<=i)
    {
        printf("%d ",j);
        j=j+1;
    }
    j=1;
    printf("\n");
    i=i+1;
}

*/
//-----------------------------------------------------------
/*
1 ile 100 arasındaki tek ve çift sayıları bulan kod
*/
/*
int i=1;
for(i=1;i<=100;i++)
{
    if(i%2==0)
    {
        printf("%d cift\n",i);
    }
    else{
        printf("%d tek\n",i);
    }
}
*/

//-----------------------------------------------------------
/*
Girilen üç nottan en az iki tanesi 60 veya üzeri ise ekrana
“Geçti” yazan, diğer durumlarda ise “Kaldı” yazan kod
*/

/*
int ex1,ex2,ex3;
printf("enter values of your exams:");
scanf("%d %d %d",&ex1,&ex2,&ex3);

if(ex1>=60)
{
    if(ex2>=60)
    {
        printf("pass");
    }
    else if(ex3>=60)
    {
        printf("pass");
    }
}
else if(ex2>=60)
{
    if(ex3>=60)
    {
        printf("pass");
    }
    else
    {
        printf("fall");
    }
}
else
{
    printf("fall");
}
*/

//-----------------------------------------------------------
/*
Üs hesaplama kodu
*/
/*
int us,taban,sonuc=1;
printf("usu girin:");
scanf("%d",&us);
printf("tabani girin:");
scanf("%d",&taban);

while(us>=1)
{
    sonuc=sonuc*taban;
    us=us-1;
}
printf("%d^%d=%d",taban,us,sonuc);
*/
//-----------------------------------------------------------
/*
1 ile 100 arasındaki tek sayılardan 3’e tam bölünen fakat 5’e
 bölünemeyen sayıların toplamını bulan kod
*/
/*
// uzun yol

int i=1,sum=0;
while(i<=100)
{
    if(i%2!=0)
    {
        if(i%3==0)
        {
            if(i%5!=0)
            {
                printf("%d\n",i);
                sum=sum+i;
            }
        }
    }
    i=i+1;
}
printf("total=%d",sum);
*/

/*
// kisa yol for
int i=1,sum=0;
for(i=1;i<=100;i+=2)
{
    if(i%3==0 &&i%5!=0)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
}
printf("total = %d",sum);
*/

/*
//kisa yol while
int i=1,sum=0;
while(i<=100)
{
    if(i%3==0 && i%5!=0)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    i=i+2;
}
printf("total = %d",sum);
*/


//-----------------------------------------------------------

/*
100 ile 200 arasındaki asal sayıları bulan kod
*/
/*
int i=100,j=1,counter=0;
while(i<=200)
{
    while(j<=i)
    {
        if(i%j==0)
        {
            counter=counter+1;
        }
        j=j+1;
    }
    j=1;
    if(counter==2)
    {
        printf("asal sayi =>%d\n",i);
    }
    counter=0;
    i=i+1;
}
*/
//-----------------------------------------------------------
/*
// pc intro ozinin 2021 de finalde sordugu algoritma
int num,dig,count=0;
printf("enter a number:");
scanf("%d",&dig);
while(dig>=3)
{
    if(dig/3==0)
    {
        count=count+1;
    }
    dig=dig-1;
}
printf("%d",count);
*/

//-----------------------------------------------------------
/*
int r=1,c=1;
while(r<=5)
{
    while(c<=r)
    {
        printf("%d",c);
        c=c+1;
    }
    c=1;
    printf("\n");
    r=r+1;
}
*/

//-----------------------------------------------------------
/*
int number;
int product=1;
printf("enter a number");
scanf("%d",&number);
while(number!=0)
{
    product=product*(number%10);
    number=number/10;
}
printf("The product is %d",product);
*/


//-----------------------------------------------------------
/*
• Write the c program to check whether the number is armstrong or not.
• The number must be entered by the user and assigned to a variable named
as “num”.
• Declare a variable called as “arms” that indicates Armstrong number.
• Armstrong number is a number that is equal to the sum of cubes of its digits.
• 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/
/*
int num;
printf("enter a number:");
scanf("%d",&num);
int arms;
arms=num;
int product=0;
while(num!=0)
{
    product=(num%10)*(num%10)*(num%10)+product;
    num=num/10;
}
if(product==arms)
{
    printf("The number '%d' is Armstrong number",arms);
}
else{
    printf("The number '%d' is NOT Armstrong number",arms);
}
*/
//-----------------------------------------------------------
/*
int n, i = 1, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (i < n)
{
if (n % i == 0) { sum = sum + i; }
i++;
}
if (sum == n){ printf("%d is a perfect number", i);}
else{ printf("%d is not a perfect number", i);}
*/
//-----------------------------------------------------------

/*
int num=25697;

int n=num%10;

while(num>=10)

{

    num=num/10;

    n=n+1;

}

n=n+num%10;
printf("%d",n);
*/

//-----------------------------------------------------------
int num1=10,num2=5,Hcf=0,i=1;

for(i=1;i<=num1;i++)

{

    if(num1%i==0&&num2%i==0)

    {

        Hcf=i;

    }

    printf("%d\n",Hcf);

    }




















    return 0;
}
