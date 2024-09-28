//sum of natural number 'n'

#include<stdio.h>
int sum(int n);
int main(){
    int n,c;
    printf("Enter a no:");
    scanf("%d",&n);
    c=sum(n);
    printf("The sum is %d",c);
}

int sum(int n){
    if(n<=0)
    return 0;
    else
    return n+sum(n-1);
}