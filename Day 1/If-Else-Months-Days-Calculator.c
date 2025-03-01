#include <stdio.h>

int main() {
    int month,year;
    scanf("%d %d",&month,&year);
    if((month<1 || month>12) && year<1){
        printf("Invalid Month\n");
        printf("Invalid Year\n");
    }
    else if(month<1 || month>12){
        printf("Invalid Month\n");
    }
     else if(year<1){
        printf("Invalid Year\n");
    }
    else{    
        if((year%4==0 && year%100!=0) ||(year%400==0)){
           if(month==1){
               printf("%d\n",31);
           }
            else if(month==2){
              printf("%d\n",29); 
            }
            else if(month==3){
              printf("%d\n",31);
            }
            else if(month==4){
              printf("%d\n",30);  
            }
            else if(month==5){
              printf("%d\n",31);  
            }
            else if(month==6){
              printf("%d\n",30);  
            }
            else if(month==7){
              printf("%d\n",31);  
            }
            else if(month==8){
              printf("%d\n",31);  
            }
            else if(month==9){
              printf("%d\n",30);  
            }
            else if(month==10){
              printf("%d\n",31);  
            }
            else if(month==11){
              printf("%d\n",30);  
            }
            else if(month==12){
              printf("%d\n",31); 
            }
        }
        else{
            if(month==1){
               printf("%d\n",31);
           }
            else if(month==2){
              printf("%d\n",28); 
            }
            else if(month==3){
              printf("%d\n",31);
            }
            else if(month==4){
              printf("%d\n",30);  
            }
            else if(month==5){
              printf("%d\n",31);  
            }
            else if(month==6){
              printf("%d\n",30);  
            }
            else if(month==7){
              printf("%d\n",31);  
            }
            else if(month==8){
              printf("%d\n",31);  
            }
            else if(month==9){
              printf("%d\n",30);  
            }
            else if(month==10){
              printf("%d\n",31);  
            }
            else if(month==11){
              printf("%d\n",30);  
            }
            else if(month==12){
              printf("%d\n",31);  
            }
        }
    }
    return 0;
}