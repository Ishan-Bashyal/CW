//array even odd count

#include <stdio.h>

int main() {
    int a[5];
    int even=0;
    int odd=0;
    
    for(int i=0;i<5;i++){
        printf("Enter numbers: ");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
        
    }
    printf("Even count: %d\n",even);
    printf("Odd count: %d\n",odd);

    
}