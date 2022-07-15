#include <stdio.h>

int main(){
    printf("Find factorial of a number\n");
    int num,fact=1;
    printf("Enter a number to find factorial");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        fact = fact *i;
    }
        printf("%d",fact);
    return 0;
}