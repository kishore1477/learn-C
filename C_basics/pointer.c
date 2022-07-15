#include <stdio.h>
int main(){
    printf("learn about pointers\n");
    int a=2 ;
    int *ptr = &a;
    printf("adress of a is:%x \n",&a);
    printf("adress of ptr:%x\n",&ptr);
    printf("value of ptr  is:%d \n",*ptr);
    printf("value of a   is:%d",a);
    return 0;
}