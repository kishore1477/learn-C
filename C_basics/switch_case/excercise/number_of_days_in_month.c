#include <stdio.h>
int main(){
    int month;
    printf("Enter number \n");
    scanf("%d", &month);
    // switch (month)
    // {
    // case 1:
    //     printf("31 days");
    //     break;
    // case 2:
    //     printf("28/29 days");
    //     break;
    // case 3:
    //     printf("31 days");
    //     break;
    // case 4:
    //     printf("30 days");
    //     break;
    // case 5:
    //     printf("31 days");
    //     break;
    // case 6:
    //     printf("30 days");
    //     break;
    // case 7:
    //     printf("31 days");
    //     break;
    // case 8:
    //     printf("31 days");
    //     break;
    // case 9:
    //     printf("30 days");
    //     break;
    // case 10:
    //     printf("31 days");
    //     break;
    // case 11:
    //     printf("30 days");
    //     break;
    // case 12:
    //     printf("31 days");
    //     break;
    
    // default:
    // printf("Invalid input month! please enter number (1-12)");
    //     break;
    // }
// method -2
    switch (month)
    {
  case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days.");
        break;
               case 4:
        case 6:
        case 9:
        case 11: 
            printf("30 days");
            break;
     case 2: 
            printf("28/29 days");
            break;
    default:
    printf("Invalid input month! please enter a number (1-12)");
        break;
    }
}