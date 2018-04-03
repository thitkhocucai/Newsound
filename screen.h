#define ESC 0x1B
#define BAR "\u2590"
#define UNICODE 
typedef enum FGCOLORS {BlACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE}
//function prototype
void clearScreen(void);
void gotoxy(int , int);
void bar(int, double);
void setColor(int);
