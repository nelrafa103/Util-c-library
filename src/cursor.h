#include <stdio.h>

void cursor(char *,char *);
void gotoxy(int,int);
void cursor__color(char *);
/*
 UP \033[<n>D -> 
 DOWN \033[<n>B ->
 LEFT \033[<n>D
 RIGHT \033[<n>C
*/

/*cursor gets one parameter: 
direction and doesnt not return any value*/
void cursor(char *direction,char *steps)
{

    switch (*direction)
    {
     
    case 'u':
        printf("%s%s%s","\033[",steps,"D");
        break;
    case 'd':
        printf("%s%s%s","\033[",steps,"B");
        break;
    case 'l':
        printf("%s%s%s","\033[",steps,"D");
        break;
    case 'r':
        printf("%s%s%s","\033[",steps,"C");
        break;
    }
}
/*cursor_color() has one parameter (the first color letter)
 and doesnt not return any value */
void cursor_color(char *color_abr)
{
  
}
/*
 This code is not mine, i will try when i find it and give the credits
*/
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}