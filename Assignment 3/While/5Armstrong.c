//Check if number is armstrong or not.

#include<stdio.h>
#include<math.h>        //library here use for Power function
void main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int count = 0;
    int temp= num, sum;

    while (temp!=0)
    {
        temp= temp/10;
        count ++;
    }
    temp= num;

    while (temp!=0)
    {
        int rem = temp%10;
        int p= pow(rem, count);     //math.h
        sum += p;   //sum=sum+p
        temp= temp/10;
    }
    if(num==sum)
    {
        printf("Number %d is Armstrong!", num);
    }
    else{
        printf("Number %d is not Armstrong!", num);
    }
    
}