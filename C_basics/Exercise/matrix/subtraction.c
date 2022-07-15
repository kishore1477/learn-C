#include <stdio.h>
int main()
{
    int r, c, m1[10][10], m2[10][10], add[10][10];
    printf("Matrix addition\n");
    printf("Enter row:");
    scanf("%d", &r);
    printf("\nEnter column:");
    scanf("%d", &c);
    //  Enter data of first matrix;
    printf("Enter data of first matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("Enter data in [%d][%d]", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    //  Enter data of first matrix;
    printf("Enter data of second matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter data in [%d][%d] : ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
 // Display matrix;
    printf("Matrix 1\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    //  Enter data of first matrix;
    printf("Matrix 2\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");

    }

    // Addition of Matrix 1 and Matrix 2
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        add[i][j]= m1[i][j] - m2[i][j];
        }
        printf("\n");

    }
    // Result of Addition of matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
       printf("%d\t",add[i][j]);
        }
        printf("\n");

    }
    return 0;
}