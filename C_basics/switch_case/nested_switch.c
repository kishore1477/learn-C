#include <stdio.h>
int main(){
 int age, marks;
 printf("Enter your age");
 scanf("%d",&age);   
 printf("Enter your marks");
 scanf("%d",&marks);  
 switch (age)
 {
 case 1:
    printf("Your age is 1\n");
    switch (marks)
    {
    case 45:
        printf("Your marks is 45\n");
        break;
    
    default:
        printf("Your marks is %d\n",marks);

        break;
    }
    break;
 
 default:
        printf("Your age is %d\n",age);

    break;
 } 
}