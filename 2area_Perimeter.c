//Finding area and perimeter of rectangle or Circle
//flowchart


#include<stdio.h>
void main()
{

    int l = 10;
    int b= 5;
    int rarea = l*b; //area of rectangle
    if(l&&b>0)
    {
    printf("Area of Rectangle = %d", rarea);
    }
    else{
        printf("Area dosnt exist");
    }
    
    //perimeter of rectangle
    //perimeter of R : P=(L*W)*2
    int rperi, w= 4;
    l = 10;
    rperi = (l*w)*2;
    if(l&&w>0){
        printf("\nPerimeter of Rectangle= %d",rperi);
    }

    //Circle
    //perimeter of Circle : P=2*3.14*r
    //A of Circle +3.14 * r*r
     int r= 5;
     int carea= 3.14*r*r;

     if(r>0)
     {
        printf("\nArea of circle is =%d", carea);
     }
     else{
        printf("\nRadius is invalid");
     }

     //Perimeter of c
     int cperi= 2*3.14*r;
     if(r>0){
        printf("\nPerimeter of circle is = %d", cperi);
     }
     else{
        printf("\nRadius is invalid");
     }

}