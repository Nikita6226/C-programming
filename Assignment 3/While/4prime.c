//check if number is prime or not.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num); 
    int flag=0, i=2;
    if(num<=1)
        {
            flag =1;
        }
    else 
    {
        while (i<=num/2) 
        {
        if(num%i==0)
        {
            flag=1;
            break;        
        }
        i++;
        }
    }
    if(flag==0)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}