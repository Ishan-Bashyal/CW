// print fibonacci series using function
//0 1 1 2 3 5 8 13

#include<stdio.h>
void fibo(int);
int main(){
    int a=0, b=1,count=20;
    printf("%d%d",a,b);
    fibo(count-2);
}

void fibo(int num){
    static int a=0,b=1,c;
    if(num>0){
       c=a+b;
       printf(" %d",c);
       a=b;
       b=c;
       fibo(num-1); 
    }
    
}