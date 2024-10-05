/*
Check Positive, Negative, or Zero

Description: Write a program that reads an integer and checks whether it is positive, 
negative, or zero using nested if statements.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    if(n>=1)
    printf("The number is positive");
    else if(n<0)
    printf("The number is negative");
    else
    printf("The number is zero");
}