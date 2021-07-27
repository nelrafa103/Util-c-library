/* Background colors  */
#define ANSI__RED__BACKGROUND "\033[1;41m"
#define ANSI__GREEN__BACKGROUND "\033[1;42m"
#define ANSI__YELLOW__BACKGROUND "\033[1;43m"
#define ANSI__BLUE__BACKGROUND "\033[1;44m"
#define ANSI__MAGENTA__BACKGROUND "\033[1;45m"
#define ANSI__CYAN__BACKGROUND "\033[1;46m"
#define ANSI__WHITE__BACKGROUND "\033[1;47m"
#define ANSI__RESET__BACKGROUND "\033[1;0m"

/*Bright Backgroud colors */
 
/* Font colors */

#define RED  "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m'"

/* Colors Abrevations */

#define RED__ABR  'r'
#define GREEN__ABR  'g'
#define YELLOW__ABR  'y'
#define BLUE__ABR   'b'
#define MAGENTA__ABR 'm' 
#define CYAN__ABR    'c'
#define WHITE__ABR   'w'
#define RESET__ABR  'n'

/* backgroud recieve a char pointer as parameter and set the color as background 
when the terminal is write in*/
void background(char *color)
{
    switch (*color)
    {
    case RED__ABR:
        printf(ANSI__RED__BACKGROUND);

    case BLUE__ABR:
        printf(ANSI__BLUE__BACKGROUND);

   case GREEN__ABR:
        printf(ANSI__GREEN__BACKGROUND);

    case CYAN__ABR:
        printf(ANSI__CYAN__BACKGROUND);

    case MAGENTA__ABR:
        printf(ANSI__MAGENTA__BACKGROUND);

    case WHITE__ABR:
        printf(ANSI__WHITE__BACKGROUND);
    case YELLOW__ABR:
        printf(ANSI__YELLOW__BACKGROUND);

    case RESET__ABR:
        printf(ANSI__RESET__BACKGROUND);
    }
}
/*color() has a parameter (gets a abrevation)  */
void color(char *color) 
{
   switch (*color)
    {
    case RED__ABR:
        printf(RED);
        break;
    case  BLUE__ABR:
        printf(BLUE);
        break;
    case GREEN__ABR:
        printf(GREEN);
        break;
    case CYAN__ABR:
        printf(CYAN);
    case MAGENTA__ABR:
        printf(MAGENTA);
        break;
    case WHITE__ABR:
        printf(WHITE);
        break;
    case YELLOW__ABR:
        printf(YELLOW);
        break;
    case RESET__ABR:
        printf(RESET);
    }
}