#include<stdio.h>
int main(){
    int n;
    printf("Enter number of subjects  ");
    scanf("%d",&n);
    int arr[n]; 
    int i,tot=0;
    float per;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        tot= arr[i]+tot;
    }
    per=tot/n;
    printf("\n%.2f is percenage of array",per);

    int min=arr[0],max=arr[0];
    
    for (i=0; i<n; i++){
        if (min<arr[i]){
        }
        else{
            min=arr[i];
        }
    }
    for (i=0; i<n; i++){
        if (max>arr[i]){
        }
        else{
            max=arr[i];
        }
    }
    printf("\n%d is max marks in array",max);
    printf("\n%d is min marks in array",min);
    printf("\n%d is total marks of array ",tot);
    
}