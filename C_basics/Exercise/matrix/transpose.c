#include <stdio.h>

int main(){
    int i,j,r,c,constant =4;
    int mul[10][10], m1[10][10],transpose[10][10];
    printf("Welcome to matrix Exercise\n");
    // Enter number of row and column
printf("Enter number of rows\n");
scanf("%d",&r);
printf("Enter number of columns\n");
scanf("%d",&c);
// Insert data of first matrix
printf("Enter data of  matrix");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
    printf("Enter data in [%d][%d]: ", i, j);
        scanf("%d",&m1[i][j]);
    }
    
    
}
// Insert data of 2nd matrix

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
// transpose computing of a matrix 
printf("\nMatrix 1:\n");
for ( i = 0; i < r; i++)
{
    m1[i][j] =0;
 for ( j = 0; j < c; j++)
 {
   transpose[j][i] = m1[i][j] ;

 }
 printf("\n");
    
}



// Transpose of Given matrix
printf("Transpose of Given matrix %d \n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",transpose[i][j]);
    }
    printf("\n");
}

return 0;

}