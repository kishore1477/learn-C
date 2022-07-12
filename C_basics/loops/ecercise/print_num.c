#include <stdio.h>
// int main(){
//     int n=0,i=1;
//     //print  natural number 
//     // int n = 10,i=1;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     while (i<n)
//     {
        
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }


// using for loops
int main(){
    int n=10,i;
    // int n = 10,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
     printf("Natural numbers from 1 to %d : \n", n);
   for ( i = 0; i < n; i++)
   {
    printf("%d\n",i);
   }
   
    return 0;
}