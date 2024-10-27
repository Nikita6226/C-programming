//PRINT PRIME NUMBER IN THE GIVEN RANGE.

#include<stdio.h>

int isPrime(int num) {
    if(num <= 1)
    {
        return 0;
    }

    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        {
            return 0;   //number is not prime
        }
    }
    return 1;   //number is prime
    
}


int main()
{
    int n;

    printf("Enter the upper limit: ");
    scanf("%d",&n);

    printf("Prime number is between 1 to %d are: ", n);

    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}