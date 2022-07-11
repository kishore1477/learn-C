#include <stdio.h>
int main(){

    //⁂ Q #1
    // find maximum two numbers
    int num_1, num_2;
    printf("Enter num_1\n");
    scanf("%d", &num_1);
    printf("Enter num_2\n");
    scanf("%d", &num_2);
    // 🥰 method :1
    if(num_1>num_2){
        printf("num_1 \" %d \"  is greater than num_2 \" %d \" ",num_1, num_2);
    }else{
         
        printf("num_2 \" %d \"  is greater than num_1 \" %d \" ",num_2, num_1);
        
    }


    //  find maximum  and equal in nested type in if else condition

    if(num_1>num_2){
        printf("num_1 \" %d \"  is greater than num_2 \" %d \" ",num_1, num_2);
    }else{
        if(num_1 == num_2){
        printf("num_2 \" %d \"  is equal to  num_1 \" %d \" ",num_2, num_1);

        }else{

        printf("num_2 \" %d \"  is greater than num_1 \" %d \" ",num_2, num_1);
        }
    }
// 🥰 method :02
    // another way of find max between two numbers
       int max;
        if(num_1>num_2)
        max = num_1;
        else
        max = num_2;
        printf("%d is max", max);

    
   
    return 0;
}