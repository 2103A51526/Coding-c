#include<stdio.h>
int main()
{
    int dividend,divisior, quo,rem;
    printf("Enter dividend ");
    scanf("%d",&dividend);
    printf("Enter divisor ");
    scanf("%d",&divisior);
    if(divisior==0){
        printf("Division with 0 not possible!");
    }
    else{
    quo = dividend / divisior;
    rem = dividend % divisior;
    printf("The quo = %d  and rem = %d",quo,rem);
    }
    return 0;
}