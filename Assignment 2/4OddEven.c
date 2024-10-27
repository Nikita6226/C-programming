/*Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to
enter his choice , then based on that perform the desired operations.*/
//skip for type 2
#include<stdio.h>
int main()
{
    int choice, no=50;
    printf("1.Even Odd \n2.Basic salary.\nEnter a choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        if(no%2==0)
        {
            printf("Number is even");
        }
        else 
        {
            printf("Number is Odd");
        }
    }
    else
    {
        if(choice==2)
        {
            double da, ta, hra;
            double basics= 3000;
            if(basics<5000)
            {
                da= basics*0.10;        //10%= 10/100= 0.10
                ta= basics*0.20;        //20%= 20/100= 0.20
                hra= basics*0.25;       //25%= 25/100= 0.25  
                printf("Total salry: %lf",da+ ta+ hra);
            }
            else
            {
            da= basics*0.15;         //15%= 15/100= 0.15
                ta= basics*0.25;         //25%= 25/100= 0.25
                hra= basics*0.30;         //30%= 30/100= 0.30
                printf("Total salry: %lf",da+ ta+ hra); 
            }
        }
    }
    return 0;
}