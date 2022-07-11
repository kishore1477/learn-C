#include <stdio.h>
int main(){
    // Find age
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    switch (age)
    {
    case 1:
        printf("Your age is 3");
        break;
    case 2:
        printf("Your age is 2");
        break;
    
    default:
    printf("your age is %d", age);
        break;
    }
}