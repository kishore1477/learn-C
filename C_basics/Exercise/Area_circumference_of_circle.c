#include <stdio.h>

int main(){
    printf("                        \" Find area of circle \"");
    int r, area_formula, circum_formula ;
    float PI = 3.14;
    printf("\nEnter radius of circle: ");
    scanf("%d",&r);
    area_formula = PI * r * r;
    printf("Area of Circle is: %d meter square\n",area_formula) ;
    circum_formula = 2* PI * r ;
    printf("Circumference  of Circle is: %d meter ",circum_formula) ;




return 0;
}