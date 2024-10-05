//add array a and b and show in c

#include <stdio.h>

int main() {
    int a[5],b[5],c[5];
    
    for(int i=0;i<5;i++){
        printf("Enter numbers for a: ");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++){
        printf("Enter numbers for b: ");
        scanf("%d",&b[i]);
    }
    
    printf("\nThe values of c are:\n");
    for(int i=0;i<5;i++){
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
    
}