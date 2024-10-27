//Calculate sum of  numbers in the given range.

#include<stdio.h>
void main()
{
    int start, end, sum=0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d",&end);

    for (int i = start; i <=end; i++)
    {
        sum += i;        
    }
    printf("Sum of range %d to %d is : %d", start, end, sum);
    
}