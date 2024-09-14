/* 12. Write a program to classify a person’s weight status based on their BMI. 
The categories are:
  bmi = weight / (height * height);

  Underweight: BMI < 18.5

  Normal weight: 18.5 ≤ BMI < 24.9

  Overweight: 25 ≤ BMI < 29.9

  Obese: BMI ≥ 30
*/

#include<stdio.h>
int main(){
    float bmi,h,w,feet,meter;
    {
        printf("Enter height in feet\n");
        scanf("%f",&feet);
        meter=feet*0.304;{
            printf("Your height in meter is %f\n",meter);
        }
    }
    printf("Enter your height(meters) and weight(kgs)");
    scanf("%f%f",&h,&w);
    bmi=w/(h*h);
    if (bmi<18.5){
        printf("You are underweight");
    }else if(bmi>=18.5 && bmi<24.9){
        printf("You are normal weighted");
    }else if(bmi>=24.9 && bmi<29.9){
        printf("You are overweight");
    }else if(bmi>=30){
        printf("You are obese");
    }else{
        printf("Invalid");
    }
}