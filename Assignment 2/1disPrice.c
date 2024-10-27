//Find the price of item when discount is given (specify different discount based on price)
//flowchart

#include<stdio.h>
void main()
{
    double discount, price, dis;        
    printf("Enter the price : ");
    scanf("%lf", &price);

    if (price<=500)
    {
        printf("No discount");
        double total_p = price- dis;
        printf("\nTotal Price: %lf", total_p);
    }
    else
    {
        if(price>500 && price<1000)
        {
            double dis= price*0.05;      //price= price -dis
            printf("Discount is : %lf", dis);
            double total_p = price- dis;
            printf("\nTotal Price: %lf", total_p);
        }
        else
        {
            if(price>1000 && price<1500)
            {
                double dis = price*0.1;
                printf("Discount is : %lf", dis);
                double total_p = price- dis;
                printf("\nTotal Price: %lf", total_p);
            }
            else
            {
                if(price>1500)
                {
                    double dis= price*0.2/100;
                    printf("Discount is: %lf", dis);
                    double total_p = price- dis;
                    printf("\nTotal Price: %lf", total_p);
                }
            }
        }
        
    }
    
}