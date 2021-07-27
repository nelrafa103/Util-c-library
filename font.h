#define BOLD 'B'
#define UNDERLINE 'U'
#define REVERSED 'R'

void font(char *);
void size(int);
/* font() gets pointer char (that gets a abrevation) 
and doesnt return any value */
void font(char *decoration)
{
    switch (*decoration)
    {
    case BOLD:
       
        break;
    case UNDERLINE:
 
        break;
    case REVERSED:
         
        break;
    }
}
/* size() change the size of the font 
and doesnt return any value */
void size(int size)
{
  
}