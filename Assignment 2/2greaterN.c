//2. Write a program to find greatest numbers using nested if else.

#include<stdio.h>
void main()
{
    int a= 10, b= 220, c=30;

    if(a>b){
        if(a>c)
        {
            printf("a is greater !!");
        }
        else 
        {
            printf("c is greater!!");
        }
    } 
    else if (b>c)
        {
            printf("b is greater!!");
        }
        else
        {
            printf("c is greater!!");
        }
    
}