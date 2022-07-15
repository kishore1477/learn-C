#include <stdio.h>
int main(){

    int i,j ;
    // printf("Question #1\n");
    // for ( i = 0; i < 3; i++)
    // {
    //    for ( j = i; j <3; j++)
    //    {
    //      printf("*");
    //    }
    //    printf("\n");
       
    // }
    // output 
// ***
// **
// *
//     printf("Question #2 \n");

//    for ( i = 0; i < 6; i++)
//     {
//        for ( j = 0; j <=i; j++)
//        {
//          printf("*");
//        }
//        printf("\n");
       
//     }
    // output
// *
// **
// ***
// ****
// *****
// ******
    // printf("Question #3 \n");
    // for ( i = 0; i < 3; i++)
    // {
    //    for ( j = i; j <3; j++)
    //    {
    //      printf("%d",i);
    //    }
    //    printf("\n");
       
    // }
    // output
// 000
// 11
// 2
//   printf("Question #4 \n");
//     for ( i = 0; i < 3; i++)
//     {
//        for ( j = 0; j <=i; j++)
//        {
//          printf("%d",j);
//        }
//        printf("\n");
       
//     }
 // output
// 0
// 01
// 012
// printf("Question #5 \n");
//     for ( i = 0; i < 3; i++)
//     {
//        for ( j = 0; j <=i; j++)
//        {
//          printf("%d",i);
//        }
//        printf("\n");
       
//     }
    // output
// 0
// 11
// 222

printf("Question #6 \n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j <=i; j++)
       {
        if(i==j){

         printf("*");
        }else{
         printf(" ");

        }
       }
       printf("\n");
       
    }
    // output
// *
//  *
//   *
printf("Question #7 \n");
    for ( i = 0; i <=3; i--)
    {
       for ( j = 0; j >=0; j--)
       {
        if(i==j){

         printf("*");
        }else{
         printf(" ");

        }
       }
       printf("\n");
       
    }
    return 0;
}