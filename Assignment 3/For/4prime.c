//check if number is prime or not.

#include<stdio.h>
void main()
{
    int num, isPrime=1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=2 ; i<num ; i++)
    {
            if (num%i==0)
            {
                isPrime=0;
                break;
            }
            
    }
    if (isPrime==1)
    {
        printf("%d is a Prime number.", num);
    }
    else
    {
        printf("%d is not a Prime Number.", num);
    }
    
}