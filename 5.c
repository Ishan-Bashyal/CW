#include<stdio.h>
int main(){
    int a,b,c,d,e,av,t,p;
    printf("Enter marks in 5 subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    av=t/5;
    p=(t/100)*100;{
        printf("The total marks is %d, the average marks is %d and the percentage is %d",t,av,p);
    }
}