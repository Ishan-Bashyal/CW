/*
18: Electricity Bill Calculation

Description: Write a program to calculate the electricity bill based on the following conditions:

If units <= 100: rate is 5 per unit
If units <= 200: rate is 10 per unit for units above 100
If units > 200: rate is 15 per unit for units above 200
*/
#include<stdio.h>
int main(){
    int unit,bill;
    printf("Enter unit");
    scanf("%d",&unit);
    if(unit<=100){
        bill=unit*5;
    }else if(unit>100 && unit<=200){
        bill=unit*10;
    }else{
        bill=unit*15;
    }
    printf("The total bill is %d",bill);
}