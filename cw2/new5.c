//armstrong or not
#include<stdio.h>
int arm(int);
int main(){
    int number;
    printf("Enter any number");
    scanf("%d",&number);
    if(arm(number)){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
}

int arm(int num){
    int original=num;
    int reversed=0;
    while(num>0){
       int digit=num%10;
       reversed=(digit*digit*digit)+reversed;
       num=num/10;
    }
    return original ==reversed;
    
}

