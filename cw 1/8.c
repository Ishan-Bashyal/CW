#include<stdio.h>
int main(){
    int p,t,r,ci;
    printf("Enter principle, time and rate");
    scanf("%d%d%d",&p,&t,&r);
    ci=p*(1+r/100)^t-p;{
        printf("The compound interest is %d",ci);
    }
}