#include<stdio.h>
int pal(int);
int main(){
    int number;
    printf("Enter any number");
    scanf("%d",&number);
    if(pal(number)){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
}

int pal(int num){
    int original=num;
    int reversed=0;
    while(num>0){
       int digit=num%10;
       reversed=(reversed*10)+digit;
       num=num/10;
    }
    return original ==reversed;
    
}