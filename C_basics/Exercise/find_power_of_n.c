#include <stdio.h>
#include <math.h>
int main(){
    int num,power , result;
    printf("Find power of n number:\n");
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter a power:");
    scanf("%d",&power);
    // // simple - method -1 (it has a limit)
    // printf("%d %d ",num*num, num*num*num);
// method - 2 using power function
result = pow(num, power);
printf("The power of %d number is :%d ", num,result);
return 0;
}