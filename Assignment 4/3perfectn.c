//Check perfect number in the given range.

#include<stdio.h>

int isPerfect(int num)
{
    int sum =1;
    for(int i=2 ; i*i<=num ; i++)
    {
        if(num%i==0)
        {
            if(i*i!= num)
            {
                sum += i+ (num/i);
            }
            else
            {
                sum += i;
            }
        }
    }
    return sum == num && num != 1;
}

int main()
{
    int n;
    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d are: ", n);


    for(int i=1 ; i<= n; i++)
    {
        if(isPerfect(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}