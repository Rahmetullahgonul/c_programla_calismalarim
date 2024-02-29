#include <stdio.h>
#include <stdlib.h>

int main()
{


/*Write a program in C to find whether a number is even
or odd.
Note That:
• The number must be entered by the user.
• You must use the mod operator.
• The output is like:
*/
/*
int number;
printf("please enter a number:\n");
scanf("%d",&number);

if(number%2==0)
{
    printf("%d is a even number",number);
}
else{
    printf("%d is a odd number",number);
}
*/
//------------------------------------------------------------------

/*
Write a C Program to find greatest of three numbers
Note That:
• Three input integer numbers from the user
• Returns the greatest number as output.
• Use a simple if-elseif-else block.
• The output must be like:
*/
/*
int number1,number2,number3;
printf("enter first number:\n");
scanf("%d",&number1);
printf("enter second number:\n");
scanf("%d",&number2);
printf("enter third number:\n");
scanf("%d",&number3);
int biggest;

if (number1>number2)
{
    if (number1>number3)
    {
        biggest=number1;
    }
}
else if (number2>number3)
{
    biggest=number2;
}
else{
    biggest=number3;
}
printf("The largest number among %d %d %d is %d",number1,number2,number3,biggest);
*/
//------------------------------------------------------------------


/*
Write a C Program to find the Sum of First n Natural numbers.
Note That:
• Declare a variable called as “N” that is entered by the user.
• Declare a variable called as “sum” that calculate the sum of the numbers
from 1 to the number “N”.
• Firstly, you must use FOR loop for finding the sum.
• Secondly, you must use WHILE loop for finding the sum
• The output must be like:
*/

/*
int n,sum=0;
printf("enter a number:\n");
scanf("%d",&n);

//while:

/*while(n>=1)
{
    sum=sum+n;
    n=n-1;
}
printf("The sum of the first %d natural numbers is %d",n,sum);


//for:

for(n;n>=1;n--)
{
    sum=sum+n;
}
printf("The sum of the first %d natural numbers is %d",n,sum);
*/

//------------------------------------------------------------------
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
for(i;i<=15;i++)
{
    if(i%5==0)
    {
        count=count+1;
        sum=sum+i;
    }
}
printf("The count is %d \nThe sum is %d",count,sum);
*/

//------------------------------------------------------------------
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
int n1,n2,n3,n4,n5;
printf("enter 5 numbers:");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
int sum=0;
float avr=0;

sum=n1+n2+n3+n4+n5;
avr=sum/5;
printf("%d %d %d %d %d numbers => sum of them=%d and avarage of them %f",n1,n2,n3,n4,n5,sum,avr);
*/
//------------------------------------------------------------------
/*
Write a C Program to Calculate the sum of the input numbers from the user
until the user enters a zero or a negative number.
Note That:
• Declare a variable called as “sum” that calculates the sum of all the integer
numbers.
• You must use WHILE loop
*/
/*
int sum=0;
int number;
printf("enter a number:");
while(1)
{
    scanf("%d",&number);
    if (number>0)
    {
        sum=sum+number;
    }
    else{
        break;
    }
}
printf("the sum of numbers is %d",sum);
*/
//------------------------------------------------------------------
/*
• Write a program in C language that finds the quotient and
remainder of a division.
• Note that:
• Declare two variables called as “dividend” and “divisor” which are
entered by the user.
• The output of the program must be like:
*/
/*
int dividend,divisor;
printf("enter dividend:");
scanf("%d",&dividend);
printf("enter divisor:");
scanf("%d",&divisor);
int remainder;

quotient= dividend/divisor;
remainder= dividend%divisor;

printf("quotient: %d, remainder: %d\n",quotient,remainder);
*/
//------------------------------------------------------------------
/*
int r=1,c=1;
while(r<=5)
{
while(c<=r)
{
printf("%d",c);
c++;
}
printf("\n");
c=1;
r++;
}
*/

//------------------------------------------------------------------
// ALGORİTMA SLAYTINDAKİ SORULAR VE ÇÖZÜMLERİ
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
• The output must be represented as a document
*/

int ex1,ex2,ex3,ex4;
printf("enter your exam values:");
scanf("%d %d %d %d",&ex1,&ex2,&ex3,&ex4);
float avr;
avr=(ex1+ex2+ex3+ex4)/4;
if(avr>=50)
{
    printf("your avarage is %f and PASS",avr);
}
else{
    printf("your avarage is %f and FALL",avr);
}
















    return 0;
}
