//Check if number is perfect or not.

#include<stdio.h>
void main()
{
    int sum=0, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum+= i;
        }
    }
    if(num==sum)
    {
        printf("%d is Perfect number", num);
    }
    else
    {
        printf("%d is not perfect number", num);
    }
}