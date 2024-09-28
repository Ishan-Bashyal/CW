//factorial of number
#include<stdio.h>
int fact(int n);
int main(){
    int n,c;
    printf("Enter a no.");
    scanf("%d",&n);
    c=fact(n);
    printf("The factorial is %d",c);
}

int fact(int n){
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}