#include <stdio.h>
int main(){
    // C program to check Vowel or consonant using switch case
    char alphabet;
    printf("Enter alphabet latter:\n");
    scanf("%c",&alphabet);
    // switch (alphabet)
    // {
    // case 'a':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'e':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'i':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'o':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'u':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'A':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'E':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'I':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'O':
    //     printf("%c is Vowel",alphabet);
    //     break;
    // case 'U':
    //     printf("%c is Vowel",alphabet);
    //     break;
    
    // default:
    //     printf("%c is Consonant",alphabet);
    //     break;
    // }

    // method -2
switch (alphabet)
{


      case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("Vowel");
            break;
            
default:
 printf("Consonant");
    break;
}
}