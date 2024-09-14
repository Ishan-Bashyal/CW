//10. Write a Program to check if a character is a vowel
#include<stdio.h>
int main(){
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("Your character is a vowel");
    }else{
        printf("Your character is not a vowel");
    }
}