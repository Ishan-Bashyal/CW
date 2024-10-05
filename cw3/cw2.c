//WAP to read marks of 5 students calculate total marks and average     marks

#include <stdio.h>

int main() {
    int a[5];
    int total=0;
    int avg;
    
    for(int i=0;i<5;i++){
        printf("Enter marks of 5 students: ");
        scanf("%d",&a[i]);
        total=total+a[i];
    }
    avg=total/5;
    printf("The total marks is: %d\nThe average marks is %d",total,avg);
    
}