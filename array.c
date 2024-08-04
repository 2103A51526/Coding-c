#include<stdio.h>
int main(){
    int n;
    printf("enter the num of people ");
    scanf("%d",&n);
    int arr[n];
    printf("enter person height ");
    int i,res=0;
    for( i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
         res = arr[i]+res;
    }
    int avg=res/n,min=arr[0],max=arr[0];
    printf("%d cm is the avg height",avg);
    for (i=1; i<n; i++){
        if (min<arr[i]){
        }
        else{
            min=arr[i];
        }
    }
    for (i=1; i<n; i++){
        if (max>arr[i]){
        }
        else{
            max=arr[i];
        }
    }
    printf("\n%d max height in the array",max);
    printf("\n%d min height in the array",min);
}