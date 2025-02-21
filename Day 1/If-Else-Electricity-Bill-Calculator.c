#include <stdio.h>

int main() {
    int n;
    float temp,remaining_units;
    scanf("%d",&n);
    temp = 0.0;
    if(n<0){
        printf("Invalid Input!");
    }
    else{
        if(n<=100){
            temp = 5.0*n;
        }
        else if(n>100 && n<=300){
            remaining_units = n - 100.0;
            temp = remaining_units*7.0 + 500.0;
        }
        else if(n>300){
            remaining_units = n - 300.0;
            temp = remaining_units*10.0 + 500.0 + 1400.0;
        }
        if(temp<=1200.0){
            temp = temp - (temp*10/100);
        }
         printf("The electricity bill is: %.2f.",temp);
    }
    
    return 0;
}