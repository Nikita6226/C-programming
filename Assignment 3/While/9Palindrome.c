//Check if the given number is pallindrome or not.

#include<stdio.h>
void main()
{
    int originalNumber, num, rem, rev =0;

    printf("Enter the number: ");
    scanf("%d", &num);

    originalNumber = num;

    while (num>0)
    {
        rem = num % 10;
        rev = rev *10 + rem;
        num/= 10;
    }
    if(originalNumber== rev)
    {
        printf("%d is Pallindrome", originalNumber);
    }
    else{
        printf("%d is not a Pallindrome", originalNumber);
    }
}