//Check Strong number in the given range.

#include<stdio.h>

int isFactorial(int digit)
{
    int fact =1;
    for(int i=1 ; i<=digit ; i++)
    {
        fact *=i;
    }
    return fact;
}

int isStrong(int num)
{
    int originalNum= num;
    int sum=0;

    while(num>0)
    {
        int digit = num%10;
        sum += isFactorial(digit);
        num /=10;
    }
    return (sum== originalNum);
}


int main()
{
    int n;
    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 to %d are: ", n);


    for(int i=1 ; i<= n; i++)
    {
        if(isStrong(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}

/*
#include <stdio.h>

void main() {
    int num, originalNum, remainder, sum = 0, factorial, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Calculate the sum of the factorials of the digits
    while (num > 0) {
        remainder = num % 10;  // Extract the last digit
        factorial = 1;

        // Calculate factorial of the digit
        for (i = 1; i <= remainder; i++) {
            factorial *= i;
        }

        sum += factorial;  // Add the factorial to the sum
        num /= 10;  // Remove the last digit
    }

    // Compare the sum with the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
}
*/