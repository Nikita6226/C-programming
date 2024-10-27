//Find factorial of number.

#include<stdio.h>
void main()
{
    int num, i=1;
    unsigned long long factorial= 1;

    printf("Enter the number: ");
    scanf("%d",&num);

    while (num<0)
    {
        printf("%d is a negative number", num);
    }

    while (i<=num)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is : %d", num, factorial);
    
}