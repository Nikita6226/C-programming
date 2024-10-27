//Print table for the given munber

#include<stdio.h>
void main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i=1;    //initialization
    while (i<=10)       //condition
    {
        int r= num*i;
        printf("%d\n",r);
        i++;    //inc/ decreament
    }
    
}