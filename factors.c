//factors of the number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     for (int i= 2; i<=n;i++){
//         if (n%i == 0){
//             printf("%d ",i);
//         }
//     }
// }


#include<stdio.h>
int main(){
    int n;
    int count = 0;
    
    printf("Enter the number");
    scanf("%d",&n);

    if (n==0){
        count = 1;
    }
    else{
        while(n != 0){
            n= n/10;
            count ++;
        }
          printf("%d",count);
    }
}
