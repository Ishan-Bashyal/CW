/*
15. Write a program to determine if a person can rent a car based on their age and
driving license status. A person must be at least 21 years old and have a valid driving license.
*/

#include<stdio.h>
#include<curses.h>
int main(){
    int age;
    char lic;
    printf("Do you have a licence? [y/n]");
    scanf("%c",&lic);
    if(lic=='y'){
        printf("What is your age?");
        scanf("%d",&age);
        if(age>=21){
            printf("You can rent a car");
        }else{
            printf("You cannot rent a car");
        }
    }else{
        printf("You cannot rent a car");
    }
}