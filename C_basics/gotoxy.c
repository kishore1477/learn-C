#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y){ //function definition
COORD coordinate = {0,0}; //initialization

   coordinate.X = x; coordinate.Y =  y;

   SetConsoleCursorPostion(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);

}
int main(){
    // int x=10, y=10;
    // gotoxy(x,y);
    // printf("C program to change cursor position");
    // getch();
    // return 0;

gotoxy(10,12);

}

