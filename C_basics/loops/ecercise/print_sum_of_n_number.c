#include <stdio.h>
int main(){
    // sum of natural number
//         int start_num=0, end_num=0, sum=0;
//   printf("Enter a starting number:");
//   scanf("%d",&start_num);
//   printf("Enter a Ending number:");
//   scanf("%d",&end_num);
// //   printf("The sum of %d is :\n",n);
// printf("The sum of natural numbers from %d to %d is: ",start_num, end_num);

// while (start_num<=end_num)
// {
//     sum = sum + start_num;
//     // printf("%d + %d =  %d \n",start_num,sum);
//     start_num++;
// }
// printf("%d", sum);
// // printf("The sum of natural numbers from %d to %d is %d: ",start_num, end_num, sum);

    // sum of even  number
        int start_num=0, end_num=0, sum=0;
        printf("\" Welcome to sum of even number portion \" \n");
  printf("Enter a starting number:\n");
  scanf("%d",&start_num);
  printf("Enter a Ending number:\n");
  scanf("%d",&end_num);
//   printf("The sum of %d is :\n",n);
printf("The sum of even numbers from %d to %d is: \n",start_num, end_num);

while (start_num<=end_num)
{
    if(start_num %2 == 0){
printf("%d\n",start_num);
    sum = sum + start_num;

    }
    // printf("%d + %d =  %d \n",start_num,sum);
    start_num++;
}
printf(" sum is %d \n", sum);
    // sum of odd number
    return 0;
}