
//Calculate sum of  numbers in the given range.

#include<stdio.h>
void main()
{
    int start, end, sum=0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d",&end);
    int i = start;

    while(i <=end)
    {
        sum += i;   //sum+= i++;
        i++;
    }
    printf("Sum of range %d to %d is : %d", start, end, sum);
    
}