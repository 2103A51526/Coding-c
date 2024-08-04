// #include<stdio.h>
// int main(){
//     int days,months,year,weeks;
//     int count= 0;
//     printf("Enter number of days");
//     scanf("%d",&days);
//     if(days>=365){
//         year = days/365;
//         printf("The number of year is %d\n",year);
//         days %=365;
//         count +=year;
//     }
//     if(days>=30){
//         months = days/30;
//         printf("The number of months is %d",months);
//         days %= 30;
//         count += months;
//     }
//     if(weeks >=7){
//         weeks = days/7;
//         printf("The number of weeks is %d",weeks );
//         days%=7;
//         count+=weeks;
//     }
// }

#include<stdio.h>
int main(){
    int cal,a,b;
    printf("Enter two number  ");
    scanf("%d %d",&a,&b);
    printf("Choose the operation 1. Addition\n  2. Subtraction\n");
    scanf("%d",&cal);
    switch (cal)
    {
    case 1:
          printf("Addition \n");
          cal = a+b;
          printf("The sum of two number is %d \n",cal);    
        break;
    case 2:
            printf("Subtraction\n");
            cal = a-b;
            printf("The diff of two number is %d\n",cal);
            break;
    }
    return 0;
}