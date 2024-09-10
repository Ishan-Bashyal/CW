#include<stdio.h>
#define PI 3.14159
int main(){
    float r,h,a,v;
    printf("Enter radius and height");
    scanf("%f%f",&r,&h);
    a=PI*r*r;
    v=PI*r*r*h;{
        printf("The area of cricle is %f and the volume of cylinder is %f",a,v);
    }
}