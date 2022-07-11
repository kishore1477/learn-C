#include <stdio.h>
int main(){
    // find maximum two numbers
    int num_1, num_2;
    // printf("Enter two number:");
    // scanf("%d%d",&num_1,&num_2);
    printf("enter num_1\n");
    scanf("%d",&num_1);
    printf("enter num_2\n");
    scanf("%d",&num_2);

    if(num_1>num_2){
        printf("num_1  \"%d\" is greater  than  num_2 \"%d\"  ", num_1,num_2);
    }
    if(num_2>num_1){
        printf("num_2  \"%d\" is greater  than  num_1 \"%d\"  ", num_2,num_1);

    }
    if(num_2==num_1){
        printf("num_1  \"%d\" is equal to  num_2 \"%d\"  ", num_1,num_2);

    }
    return 0;
    
}