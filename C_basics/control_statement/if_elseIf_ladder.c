#include <stdio.h>
int main()
{
    int num_1, num_2, num_3;
    // find the maximum one among three
    printf("Enter the num_1:");
    scanf("%d", &num_1);
    printf("Enter the num_2:");
    scanf("%d", &num_2);
    printf("Enter the num_3:");
    scanf("%d", &num_3);
    // conditions
    // 😍 method : 01
    if ((num_1 > num_2) && (num_1 > num_3))
    {
        printf("%d is max", num_1);
    }
    else if ((num_2 > num_1) && (num_2 > num_3))

    {
        printf(" num_2 \"%d\" is max ", num_2);
    }
    else
    {
        printf("num_3 \"%d\" is max", num_3);
    }
    // 😍 method : 02
      int max;
          if ((num_1 > num_2) && (num_1 > num_3))
        {
            max = num_1;
        }
        else if ((num_2 > num_1) && (num_2 > num_3))

        {
            max = num_2;
        }
        else
        {
            max = num_3;

        }
            printf("num_ \"%d\" is max", max);

    // 🐬🚒 Q#2
    // math, science :- 300
// math :- 40
// science :-30
    int m =40,s =30, stu_marks_in_m, stu_marks_in_s;
    char stu_name[30];
    printf("Enter the student name:");
    scanf("%s", &stu_name);
    printf("Enter student marks in maths:");
    scanf("%d", &stu_marks_in_m);
    printf("Enter student marks in science:");
    scanf("%d", &stu_marks_in_s);

    if( (stu_marks_in_m >= m)&&  (stu_marks_in_s >= s))
    {
       printf(" Dear %s, you have pass the maths and science paper that's why your  reward is 300", stu_name);
    }else if (stu_marks_in_m >=m)
    {
       printf(" Dear %s ,you have pass only maths  paper that's why your  reward is 40", stu_name);
    }else if(stu_marks_in_s >s){
       printf(" Dear %s ,you have pass only science  paper that's why your  reward is 30", stu_name);

    }else{
       printf(" Dear %s ,you have  not pass any paper that's why your are not eligible for reword", stu_name);
    }

    //🚚🚗🚑 Q #3
   
    return 0;
}