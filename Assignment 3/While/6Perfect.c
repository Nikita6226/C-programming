//Check if number is perfect or not.

#include<stdio.h>
void main()
{
    int num, i=1 , sum=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (i<num)
    {
        if(num%i==0)
        {
            sum += i; 
        }
        i++;
    }    
    if(sum==num)
    {
        printf("%d is Perfect number!", num);
    }
    else
    {
        printf("%d is not Perfect number!", num);
    }
    
}