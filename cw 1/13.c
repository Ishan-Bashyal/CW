/*
13. Write a program to calculate tax based on annual income:
Up to 10,000: No tax

10,001 to 50,000: 10% tax

50,001 to 100,000: 20% tax

Above 100,000: 30% tax
*/

#include<stdio.h>
int main(){
    int inc;
    printf("Enter your annual income");
    scanf("%d",&inc);
    if(inc<=10000){
        printf("You dont have to pay tax");
    }else if(inc>=10001 && inc<50000){
        printf("You have to pay 10 percent tax");
    }else if(inc>=50001 && inc<=99999){
        printf("You have to pay 20 percent tax");
    }else if(inc>=100000){
        printf("You have to pay 30 percent tax");
    }else{
        printf("Invalid! Enter number");
    }
}