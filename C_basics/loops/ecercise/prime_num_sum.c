#include <stdio.h>
int isPrime(int n){
    for (int i = 2; i *i <= n; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
        return 1;
        
    }
    
}
int main()
{
    int num, i,j, start, end, sum=0;
    printf("Enter a start number");
    scanf("%d", &start);
    printf("Enter a end number");
    scanf("%d", &end);


    for (i = start; i <= end; i++)
    {
        if (isPrime(i)){
            sum =sum +i;
printf("%d\n",i);
        }
       
        
    }
    printf("the sum of above prime number range is : %d",sum);

    return 0;
}