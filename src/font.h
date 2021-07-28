#include <stdio.h>
#define BOLD 'B'
#define UNDERLINE 'U'
#define REVERSED 'R'
#define ITALIC 'I'
#define SLOW_BLINK 'S'
#define OVERLINE 'O'
void font(char *);
void size(int);
/* font() gets pointer char (that gets a abrevation) 
and doesnt return any value */
void font(char *decoration)
{
    switch (*decoration)
    {
    case BOLD:
        printf("\033[4m");
        break;
    case UNDERLINE:
        printf("\033[4m");
        break;
    case REVERSED:
        printf("\033[7m");
        break;
    case ITALIC:
        printf("\033[3m");
    case SLOW_BLINK:
        printf("\033[5m");
    case OVERLINE:
        printf("\033[5m");
    }
}
/* size() change the size of the font 
and doesnt return any value */
void size(int size)
{
}