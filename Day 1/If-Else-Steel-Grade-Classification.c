#include <stdio.h>

int main() {
    int h;
    float c;
    int t;
    scanf("%d %f %d",&h,&c,&t);
    if(h>50 && c<0.7f && t>5600){
        printf("The grade of the steel is: %d\n",10);
        printf("All of the conditions met.\n");
    }
    else if(h>50 && c<0.7f){
        printf("The grade of the steel is: %d\n",9);
        printf("Two conditions met.\n");
    }
    else if(c<0.7f && t>5600){
        printf("The grade of the steel is: %d\n",8);
        printf("Two conditions met.\n");
    }
    else if(h>50 && t>5600){
        printf("The grade of the steel is: %d\n",7);
        printf("Two conditions met.\n");
    }
    else if(h>50 || c<0.7f || t>5600){
        printf("The grade of the steel is: %d\n",6);
        printf("Only one condition met.\n");
    }
    else{
        printf("The grade of the steel is: %d\n",5);
        printf("None of the conditions met.\n");
    }
    
    return 0;
}