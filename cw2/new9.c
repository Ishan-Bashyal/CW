//prime or not

#include<stdio.h>
void prime(int n);
int main(){
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    prime(n);
}

void prime(int n){
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
        c=c+1;
    }
    if(c==2)
    printf("Number is prime");
    else
    printf("Number is not prime");
}