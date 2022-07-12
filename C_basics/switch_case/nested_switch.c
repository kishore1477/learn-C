#include <stdio.h>
int main()
{
    //  int age, marks;
    //  printf("Enter your age");
    //  scanf("%d",&age);
    //  printf("Enter your marks");
    //  scanf("%d",&marks);
    //  switch (age)
    //  {
    //  case 1:
    //     printf("Your age is 1\n");
    //     switch (marks)
    //     {
    //     case 45:
    //         printf("Your marks is 45\n");
    //         break;

    //     default:
    //         printf("Your marks is %d\n",marks);

    //         break;
    //     }
    //     break;

    //  default:
    //         printf("Your age is %d\n",age);

    //     break;
    //  }
    char subject;
    /*
    m-maths,
    s-science,
    e-english,
    b-biology,
    p-pakistan studies

    */
    int marks;
    printf("Enter subject name:\n ");
    scanf("%c", &subject);
    printf("Enter marks:\n ");
    scanf("%d", &marks);
    switch (subject)
    {
    case 's':
        printf("Welcome to Science subject\n");
        switch (marks > 40)
        {
        case 1:
            printf("You pass the paper");
            break;
        case 0:
            printf("You have not  pass the paper \n ");
            break;

        default:
            break;
        }
        break;
    case 'e':
        printf("Welcome to English subject\n");
        switch (marks > 60)
        {
        case 1:
            printf("You pass  english  the paper");
            break;
        case 0:
            printf("You have not  pass the english  paper \n ");
            break;

        default:
            break;
        }
        break;
    case 'm':
        printf("Welcome to Science subject");
        break;
    case 'b':
        printf("Welcome to Science subject");
        break;
    case 'p':
        printf("Welcome to Science subject");
        break;

    default:
        break;
    }
}