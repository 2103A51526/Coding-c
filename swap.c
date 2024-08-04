#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);

    printf("Enter b number ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf(" The swap of two number is %d %d",a,b);
}