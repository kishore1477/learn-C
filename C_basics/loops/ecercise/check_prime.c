#include <stdio.h>

int main()
{
    int num, i;
    int isPrime = 1;
    printf("Enter a number");
    scanf("%d", &num);
    for (i = 2; i * i <=num; i++)
    {
        if (num%i == 0)
        {
            isPrime = 0;
            // break;
        }
    }
    if (isPrime)
    {
        printf("%d is prime", num);
    }
    else
    {
        printf("%d is not  prime", num);
    }
    return 0;
}