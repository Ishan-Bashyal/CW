//5.WAP to calculate and prints the sum of the elements in each row.

#include<stdio.h>
int main(){
    int row=5,col=5;
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns ");
    scanf("%d",&col);
    int num[row][col];
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
        printf("Enter value for %d column and %d row: ",j+1,i+1);
        scanf("%d",&num[row][col]);
        sum += num[row][col];
        printf("\n");
        }
        printf("The sum of %d row is %d\n",i+1,sum);
    }
}