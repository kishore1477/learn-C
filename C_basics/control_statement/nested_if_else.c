#include <stdio.h>
int main()
{
    // find the maximum one among three

    //   😍 method : 02
    int num_1, num_2, num_3;
    printf("Enter the num_1:");
    scanf("%d", &num_1);
    printf("Enter the num_2:");
    scanf("%d", &num_2);
    printf("Enter the num_3:");
    scanf("%d", &num_3);
    // conditions
    // 😍 method : 01
    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
           printf("num_1  %d is max",num_1);
        }
    }
    else if (num_2 > num_3)

    {
        if (num_2 > num_1)
        {
        printf("num_2 %d is max", num_2);

        }

    }
    else
    {
        printf("num_3 \"%d\" is max", num_3);
    }
    // 😍 method : 02
    int max;
    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
            max = num_1;
        }else{
        max = num_3;

        }
    }
    else if (num_2 > num_3)

    {
        
            max = num_2;
    }
    else
    {
        max = num_3;
    }
    printf("num_ \"%d\" is max", max);





    return 0;
}