#include<stdio.h>
int main(){
    int c ,js,py,sum=0;
    printf("Enter three subject marks C javascript Python ");
    scanf("%d %d %d",&c,&js,&py);
    sum = c+js+py;
    int avg = sum/3;
    if (avg>=70){
        printf("Destination");
    }else if (avg<=70 && avg>=60){
        printf("First Class");
    }else if (avg<=60 && avg>=50){
        printf("secon class");
    }else if (avg<=50 && avg>=40){
        printf("third Class");
    }else
    printf("fail");
    
}