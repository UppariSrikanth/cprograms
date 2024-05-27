/* 2. To calculate Area and Circumference of a circle //areaofcircle.c*/

#include <stdio.h>

int main()
{
    int radius;
    float PI=3.14;          //#define PI value = 3.14
    float area;
    float circumference;
    
    printf("Enter the radius:\n");
    scanf("%d",&radius);
    
    area= PI*radius*radius;
    circumference= 2*PI*radius;
    
    printf("Area of circle: %.2f\n",area);
    printf("Circumference of circle: %.2f\n",circumference);
    
    return 0;
}
