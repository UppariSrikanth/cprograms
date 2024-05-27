/*1. Write a program to perform simple arithmetic operation on two integers.//arithmatic.c
 */

#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition of two numbers: %d\n",a+b);
    printf("Substraction of two numbers: %d\n",a-b);
    printf("product of two numbers: %d\n",a*b);
    printf("Division of two numbers: %d\n",a/b);

    return 0;
}
