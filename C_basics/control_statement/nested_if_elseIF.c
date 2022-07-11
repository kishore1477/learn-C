#include <stdio.h>
int main(){
     // find grades of IOBM  students
    int marks;
    char stu_name[30];
    printf("\"Welcome to Grade  Caculation portal\"\n");
    printf("Enter your name:");
    scanf("%s", &stu_name);
    printf("Enter your marks of math paper\n");
    scanf("%d", &marks);
    if (marks>100)
    {
     printf("ERROR :- Dear %s enter your correct marks this number of marks is out of paper marks %d", stu_name, marks);
       
    }
    
   else if (marks>89 && marks<=100)
    {
            if(marks>89 && marks<95){
           printf("Dear %s your grade is A- on the marks of %d", stu_name, marks);

            }else if(marks>95 && marks<=100){
           printf("Dear %s your grade is A+ on the marks of %d", stu_name,marks);

            }else{
           printf("Dear %s your grade is A on the marks of %d", stu_name, marks);

            }
        // another way of writting above is:
        // if (89<marks<95)
        // {
        //     printf("Dear %s your grade is A- on the marks of %d", stu_name, marks);
        // }
        // else if (95<marks<=100)
        // {
        //     printf("Dear %s your grade is A+ on the marks of %d", stu_name, marks);
        // }
        // else
        // {
        //     printf("Dear %s your grade is A on the marks of %d", stu_name, marks);
        // }
    }
    else if (marks>80 && marks<=89)
    {
        if(marks>80 && marks<85){
           printf("Dear %s your grade is B- on the marks of %d", stu_name, marks);

            }else if(marks>85 && marks<=89){
           printf("Dear %s your grade is B+ on the marks of %d", stu_name,marks);

            }else{
           printf("Dear %s your grade is B on the marks of %d", stu_name, marks);

            }
    }
    else if (marks>70 && marks<=80)
    {
         if(marks>70 && marks<75){
           printf("Dear %s your grade is C- on the marks of %d", stu_name, marks);

            }else if(marks>75 && marks<=80){
           printf("Dear %s your grade is C+ on the marks of %d", stu_name,marks);

            }else{
           printf("Dear %s your grade is C on the marks of %d", stu_name, marks);

            }
    }
    else if (marks>=60 && marks<=70)
    {
         if(marks>=60 && marks<65){
           printf("Dear %s your grade is D- on the marks of %d", stu_name, marks);

            }else if(marks>65 && marks<=70){
           printf("Dear %s your grade is D+ on the marks of %d", stu_name,marks);

            }else{
           printf("Dear %s your grade is D on the marks of %d", stu_name, marks);

            }
    }
    else 
    {
        printf("Dear %s your are fail! with %d marks", stu_name, marks);
    }
return 0;
}
