/*
17.: Find the Oldest Person

Description: Write a program to determine the oldest among three people
based on their ages using nested if statements.
*/
#include<stdio.h>
int main(){
    int ram,hari,shyam;
    printf("Enter age of Ram, Hari and Shyam");
    scanf("%d%d%d",&ram,&hari,&shyam);
    if(ram>hari && ram>shyam){
        printf("\nRam is the oldest");
    }else if(hari>ram && hari>shyam){
        printf("Hari is the oldest");
    }else{
        printf("Shyam is the oldest");
    }
}