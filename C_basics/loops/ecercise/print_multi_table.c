#include <stdio.h>
int main(){
    int num=0,i=1, multi;
    printf("Enter a integer number:");
    scanf("%d",&num);
    while (i<=10)
    {
        multi = i * num;
     printf("%d * %d = %d\n", i,num,multi);
     i++;
    }
    return 0;
}