//prime of the number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i= 1; i<=n;i++){
        int  j, count = 0;
        for(j=2; j<i; j++){
            if(i%j== 0){
                count ++;
            }
        }
        if (count == 0){
            printf("%d ",i);
        }
    }
}