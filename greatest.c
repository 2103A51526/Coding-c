#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a, b, c number");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && b>c && c>a){
        printf(" a is greater number %d",a);

    }
    else if (b>a && b>c)
    {
        /* code */
        printf(" B is greater number %d", b);
    }
    else{
        printf("C is greater than ",c);
    }
    
}