// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter any character:\n");
//     scanf("%c",&a);
//     int c = (int)(a);
//     if(c>=65 && c<=91){
//         printf("It is UPPER CASE");
//     }
//     else if(c>=97 && c<=122){
//         printf("It is LOWER CASE");
//     }
//     else{
//         printf("It is not a ALPHABET");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int month_num;
//     printf("Enter month number");
//     scanf("%d",&month_num);
//     switch (month_num)
//     {
//     case 1:
//         printf("31");
//         break;
//     case 2:
//     printf("28/29");
//         break;
//     case 3:
//     printf("31");
//         break;
//     default:
//     printf("None");
//         break;
//     }
// } 

#include<stdio.h>
int main(){ 
    int amt ,x,count=0;
    printf("Enter the amount\n");
    scanf("%d",&amt);
    if (amt > 500)
    {
        x=amt/500;
        printf(" The number of notes of 500 is  %d\n",x);
        count += x;
        amt %= 500;
    }
    if (amt > 200 ){
        
       x=amt/200;
        printf(" The number of notes of 200 is  %d\n",x);
        count += x;
        amt %= 200;
    }
     if (amt > 100 ){ 
       x=amt/100;
        printf(" The number of notes of 100 is  %d\n",x);
        count += x;
        amt %= 100;
    } 
     if (amt > 50 ){ 
       x=amt/50;
        printf(" The number of notes of 50 is  %d\n",x);
        count += x;
        amt %= 50;
    } 
    printf("%d",count);
}



