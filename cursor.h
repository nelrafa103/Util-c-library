void cursor(char *);
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
void cursor(char *direction)
{

    switch (*direction)
    {
     
    case 'u':
        printf("\033[1D");
        break;
    case 'd':
        printf("\033[1B");
        break;
    case 'l':
        printf("\033[1D");
        break;
    case 'r':
        printf("\033[1C");
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