#include<stdio.h>
#include<math.h>

int isArmstrong(int num)
{
    int originalNum, rem, result=0, n=0;

    originalNum=num;

    while (originalNum!=0)
    {
        originalNum /= 10;
        ++n;
    }
    
    originalNum=num;

    while (originalNum!=0)
    {
        rem=originalNum %10;
        result += pow(rem, n);
        originalNum /=10;
    }
    return (result==num);
    
}


int main()
{
    int n;

    printf("Enter the upper limit: ");
    scanf("%d", &n);
    
    printf("Armstrong number between 1 to %d are: ");

    for(int i=1; i<=n; i++)
    {
        if(isArmstrong(i))
        {
            printf("\n%d",i);
        }
    }
    return 0;

}