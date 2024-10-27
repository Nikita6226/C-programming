//Check number is strong or not.

#include<stdio.h>

//func to calc fact of no.
int factorial(int n) {
    int fact=1;
    while (n>0)
    {
        fact *= n;
        n--;
    }
    return fact;
}


int main()
{
    int num, originalNumber, remainder, sum=0;

    printf("Enter the number; ");
    scanf("%d", &num);

    originalNumber= num;

    for(num>0; remainder= num%10; num/=10)
    {
        sum += factorial(remainder);
    }
    if(sum == originalNumber)
    {
        printf("%d is Stong number", originalNumber);
    }
    else
    {
        printf("%d is not Strong Number", originalNumber);
    }

}