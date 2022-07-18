#include <stdio.h>
int main(){
    int len, width, area, perameter;
    printf("Find area and perimeter of rectangle");
    printf("Enter length of rectangle ");
    scanf("%d", &len);
    printf("Enter width of rectangle ");
    scanf("%d", &width);
    area = len * width;
    perameter = 2 * (len + width);
    printf ("The area of rectangle is %d and parameter of rectangle is  %d  ", area, perameter);

    return 0;


}