#include <stdio.h>

int main() {

   double annual_income,tax;
    tax = 0.0;
    scanf("%lf",&annual_income);
    if (annual_income < 0){
        printf("INVALID");
    }
    else if(annual_income<=250000.0){
        tax = 0.0;
        printf("%.2f",tax);
    }
    else if(annual_income<=500000.0){
        tax = (annual_income-250000.0)*0.05;
        printf("%.2f",tax);
    }
    else if(annual_income<=1000000.0){
        tax = (250000.0 * 0.05) + (annual_income - 500000.0) * 0.20;
        printf("%.2f",tax);
    }
    else{
        tax = (250000.0 * 0.05) + (500000.0 * 0.20) + (annual_income - 1000000.0)*0.30;
        printf("%.2f",tax);
    }
    return 0;
}