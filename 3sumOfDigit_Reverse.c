// Accept a 3 digit number from user and find the sum of digit and also the reverse number

#include <stdio.h>
void main()
{
    int num;
    int temp = num, sum = 0, rev;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 99 && num < 999)
    {
        int rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        rev = rem;

        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        rev = (rev * 10) + rem;

        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        rev = (rev * 10) + rem;

        printf("Sum of Digit = %d", sum);
        printf("\nreverse of Digit = %d", rev);
    }
    else
    {
        printf("Incorrect input");
    }
}