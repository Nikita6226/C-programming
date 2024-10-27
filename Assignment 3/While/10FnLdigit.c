//Add the (first and last) digit of a given number? 

#include<stdio.h>
void main()
{
    int num, firstD, lastD;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num>=0 || num<10)
    {
        firstD=num, lastD=0;
    }
    else
    {
        lastD= num%10;

        while (num >=10 || num<=-10)
        {
            num = num/ 10;
        }
        firstD= num;
        
    }
    int sum = firstD + lastD;
    printf("Sum of First digit and last digit : %d", sum);
}