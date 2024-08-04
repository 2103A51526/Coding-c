#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int arr[n],i;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be checked");
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if (arr[i] == a){
            printf("%d is avialable at index %d\n",a,i);
            return 0;
        } 
    }
        printf("%d is not found ",a);   
}
        
    