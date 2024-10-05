//swap using pointer and function

#include<stdio.h>
int swap(int *a,int *b);
int main(){
    int a=10;
    int b=20;
    int *ptra=&a;
    int *ptrb=&b;
    swap(ptra,ptrb);
    
    
}

int swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("The value of a is %d\n",*a);
    printf("The value of b is %d\n",*b);
}