#include <stdio.h>

void BMICalculator(double weight, double height);

int main(){
    double weight;
    double height;

    printf("**************************");
    printf("\nBMI Calculatoe Program\n");
    printf("**************************");


    printf("\nEnter your Weight in kg: ");
    scanf("%lf", &weight);

    printf("Enter your Height in meters: ");
    scanf("%lf", &height);  

    BMICalculator(weight, height);

    return 0;
}

void BMICalculator(double weight, double height){

    double bmi = weight / (height * height);

    printf("\nYour BMI is %.2lf", bmi);

    if (bmi < 18.5)
    {
        printf("\nCategory: Underweight");
    }

    else if (bmi < 25.0)
    {
        printf("\nCategory: Normal");
    
    }
    else if (bmi < 30.0)
    {
        printf("\nCategory: Overweight");
    }

    else{
        printf("\nCategory: Obese");
    }
        
}
