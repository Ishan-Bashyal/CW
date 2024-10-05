/*
14. Calculate the Total Price with Discount
Task: Write a program to calculate the total price after applying a discount
based on the quantity purchased:

1-10 items: 5% discount

11-50 items: 10% discount

More than 50 items: 15% discount
*/
#include<stdio.h>
int main(){
    float item,total,rate;
    printf("Enter the quantity and rate of items");
    scanf("%f%f",&item,&rate);
    total=item*rate;
    if(item>=1 && item<=10){
        total=total-(total*5/100);
        printf("The total is %f",total);
    }else if(item>=11 && item<=50){
        total=total-(total*10/100);
        printf("The total is %f",total);
    }else if(item>50){
        total=total-(total*15/100);
        printf("The total is %f",total);
    }else{
        printf("Invalid try again");
    }
}