//fd and ld finding
#include<stdio.h>
int main(){
    int n,fd,ld;
    printf("Enter the number ");
    scanf("%d",&n);
    ld =(n)%10;
    fd = (n);
    while(fd >=10){
        fd/=10;
    }
    printf("%d\n",fd);
    printf("%d",ld);
    return 0;
}

