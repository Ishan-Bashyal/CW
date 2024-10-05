//11. WAP to Print whether the year is a leap year or not.
#include<stdio.h>
int main(){
    int y;
    printf("Enter the year");
    scanf("%d",&y);
    if (y%4==0){
        printf("The year is a leap year");
    }else{
        printf("The year is not a leap year");
    }
}
