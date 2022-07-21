#include <stdio.h>
int main(){
//     label:
//     printf("Label start from here");
//     return 0;
//  goto end;
//     printf("OOOOOO");
//     goto label;
//     end:
//     printf("We are out of label");

    int num;
    for (int i = 0; i < 4; i++)
    
    {
            printf("%d", i);
        for (int j = 0; j < 4; j++)
        {
            printf(" Enter j as %d :\n", j);
            scanf("%d",&num);
         if (num==0)
         {
           goto end;
        // break;
        // printf("You have enter a zero");
         }
         
        }
      
        
    }
      end:
      printf("We are out of all loops");
    return 0;
}