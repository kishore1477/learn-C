//  two methods for costant decleration
// 1. as const
// 2. #define

#include <stdio.h>
// 2. #define
#define PI 3.14  // not use = here
int main(){
// 1. as const
const int  a =1;
// a =2 // can not do this
// printf("This is a in const %d", a);
// PI =4.66; // it is not changed as declare above that PI is comstat 
printf("Th value of pi is %f", PI);

}