#include <stdio.h>
int main(){
    int num_1, num_2;
    printf("Eenter two numbers\n");
    scanf("%d \n %d", &num_1,&num_2);
    // printf("your numbers is %d and %d", num_1,num_2);
    switch (num_1 > num_2)
    {
    case 0:
        printf(" num_2 %d is max",num_2);
        break;
    case 1:
        printf(" num_1 %d is max",num_1);
        break;
    
    default:
    printf("Enjoy");
        break;
    }
    
    }