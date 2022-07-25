#include <stdio.h>

int main(){
    int i,j,r,c;
    int mul[10][10], m1[10][10],m2[10][10];
    printf("Welcome to matrix Exercise\n");
    // Enter number of row and column
printf("Enter number of rows\n");
scanf("%d",&r);
printf("Enter number of columns\n");
scanf("%d",&c);
// Insert data of first matrix
printf("Enter data of first matrix");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
    printf("Enter data in [%d][%d]: ", i, j);
        scanf("%d",&m1[i][j]);
    }
    
    
}
// Insert data of 2nd matrix
printf("Enter data of Second matrix");

for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
    printf("Enter data in [%d][%d]: ", i, j);
        scanf("%d",&m2[i][j]);
    }
    
    
}
// Display matrix
printf("\nMatrix 1:\n");
for ( i = 0; i < r; i++)
{
 for ( j = 0; j < c; j++)
 {
    printf("%d\t", m1[i][j]);

 }
 printf("\n");
    
}
printf("Matrix 2:\n");

for ( i = 0; i < r; i++)
{
 for ( j = 0; j < c; j++)
 {
    printf("%d\t", m2[i][j]);

 }
 printf("\n");
    
}

// multiplication
// for ( i = 1; i <=r; i++)
// {
//     for ( j = 1; j <= c; j++)
//     {
//         mul[i][j]=0;
//         for (int k = 1; k <=c; k++)
//         {
//            mul[i][j] += m1[i][k]*m2[k][j] ;
//         }
        
//     }
    
// }
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        mul[i][j]=0;
        for (int k = 0; k < c; k++)
        {
           mul[i][j] += m1[i][k]*m2[k][j] ;
           printf("%d * %d ",m1[i][k],m2[k][j] );
        }
        printf("\n");
    }
    
}
// Display multiplication result
printf("Multiplication results\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",mul[i][j]);
    }
    printf("\n");
}

return 0;

}