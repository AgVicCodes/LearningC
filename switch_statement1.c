    #include <stdio.h>
    
    int main() {

    int number;
    printf("enter number between 1 and 7:");
    scanf("%d" , &number);
    
       switch(number){
           case 1:
           printf("monday");
           break;
           
             case 2:
           printf("tuesday");
           break;
           
             case 3:
           printf("wednesday");
           break;
           
             case 4:
           printf("thursday");
           break;
           
             case 5:
           printf("friday");
           break;
           
             case 6:
           printf("saturday");
           break;
           
             case 7:
           printf("sunday");
           break;
           
           default:
           printf("invalid number");
       }