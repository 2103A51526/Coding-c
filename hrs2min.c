#include<stdio.h>
int main(){
    float hrs;
    printf("Enter number of hours ");
    scanf("%f",&hrs);
    float tot_min = hrs*60;
    printf("The total number of minutes is %.1f",tot_min);
}