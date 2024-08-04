#include<stdio.h>
int main()
{
    int radius;
    float pi = 3.14159;
    printf("Enter radius  ");
    scanf("%d",&radius);
   
    float area_of_circle = pi * radius *radius;
    float cir_of_circle = 2*pi* (float)(radius);
    printf(" The area of circle is %f\n", area_of_circle);
    printf("The circumferenece of circle is  %f", cir_of_circle);

}