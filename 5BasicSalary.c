/*Calculating total salary based on basic. If basic <5000 da, ta and hra 
will be 10%, 20%, 25% respectively otherwise da, ta, hra will be 15%, 25%,
and 30% respectively.*/

#include<stdio.h>
void main()
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

/*

300.000000
600.000000
750.000000

ie.  1650*/