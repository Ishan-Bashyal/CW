//swap three variables without using a temporary variable:
#include <stdio.h>

int main(){
    int a=10;
    int b=20;
    int c=30;

    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("The value of:\na=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}
