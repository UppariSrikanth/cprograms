/*3. write a  C program that performs temperature conversions between Celsius to Fahrenheit.*/

#include <stdio.h>

int main()
{
    int celcius;
    float fahrenheit;
    
    printf("Enter the temperature in celsius:\n");
    scanf("%d",&celcius);
    
    fahrenheit=(1.8*celcius)+32;
    
    printf("Temperature in fahrenheit: %f\n",fahrenheit);

    return 0;
}
