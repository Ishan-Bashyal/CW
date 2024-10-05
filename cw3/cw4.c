//Write a C program that finds the highest score in an array of integer marks.

#include <stdio.h>

int main() {
    int a[5];
    int highest=0;
    
    for(int i=0;i<5;i++){
        printf("Enter marks: ");
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<5;j++){
        if(a[j]>highest){
            highest=a[j];
            
        }
    }
    printf("The highest marks is: %d\n",highest);
    
}