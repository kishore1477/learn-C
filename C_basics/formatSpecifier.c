// SPECIFIER  USED FOR
// %c			  a single character
// %s			  a string
// %hi			  short (signed)
// %hu			  short (unsigned)
// %Lf			  long double
// %n			  prints nothing
// %d			  a decimal integer (assumes base 10)
// %i			  a decimal integer (detects the base automatically)
// %o			  an octal (base 8) integer
// %x			  a hexadecimal (base 16) integer
// %p			  an address (or pointer)
// %f			  a floating point number for floats
// %u			 int unsigned decimal
// %e			 a floating point number in scientific notation
// %E			 a floating point number in scientific notation
// %%			 the % symbol
#include <stdio.h>
int main()
{
    //😍 integer format specifier
    // int a = 1,b=3 ;
    // printf(" the value of a is  %d and the vale of b is %d  ", a,b);

    // 😍// float format specifier
    // float a = 4.99, b =2.1;
    // printf("The vale of a is %f and the vale of b is %f \n", a,b);

    // control decimal points : left side
    // printf("The vale of a is %.3f and the vale of b is %.2f \n", a,b);
    // provide space - it works when provided character is greater then given number from .3%f : 4.990=> 5 digit= 5.3f% which is not effect but when we apply greater than 5 such as 6.4%f then it provide one space in left side or starting side
    // printf("%5.3f and the vale of b is %.2f\n", a,b);
    // printf("%6.3f and the vale of b is %.2f\n", a,b);

    // control decimal points : right side
    // printf("The vale of a is %.3f and the vale of b is %.2f \n", a,b);
    // provide space - it works when provided character is greater then given number from .3%f : 4.990=> 5 digit= 5.3f% which is not effect but when we apply greater than 5 such as -6.4%f then it provide one space in right side or ending side
    // printf("%-5.3f and the vale of b is %-4.2f\n", a,b);
    // printf("%-6.3f and the vale of b is %-5.2f\n", a,b);
    // printf("%-16.3f and the vale of b is %-15.2f\n", a,b);

    // 😍 for character
    // char first_letter_of_name = "K"; // it is wrong because char is in double quote
    // char first_letter_of_name = 'K'; // it is right because char is in single quote
    // printf("%c\n", first_letter_of_name);
    // char first_ch = 'f';
    // printf("%c\n", first_ch);

// Character input with the %c format specifier:
 char user_ch; 
//   printf("Enter the character:\n");
//   scanf("%c", &user_ch); // user inputs Y
//   printf("Your character is %c\n", user_ch);

// 😘 for string
//  char myname[] = "kishore kumar"; 
//   printf(" This is my name in string %s\n", myname); 

//   insert string as input
char my_name[0];
printf("Enter your name:\n");
scanf("%s", &my_name);
printf("Your name is :%s" , my_name);

// there are lot of formater

}