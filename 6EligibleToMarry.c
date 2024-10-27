//Write a program to checl if person is eligible to marry or not (male age >= 21 and female age >= 18).

#include<stdio.h>
void main()
{
  //  char ch = 'M';
//    char ch = 'F';
    int age= 20;
    
    if(age>=21)
    {
        printf("Male is eligible to marry");
    }
    else if(age>=18)
    {
        printf("Female is eligible to marry");
    }
    else
    {
        printf("Not eligible to marry !!");
    }
}


//Female is eligible to marry.