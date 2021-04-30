void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}


int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}


void textcolor(char color *)
{
 if(color == 'RED')
 {

 }
 lse ifelse ifnf
}