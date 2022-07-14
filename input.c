#include "scroll.h"

void openInput(void){
    // Do not display keys as they are pressed
    noecho();
    // Get entries immediately without needing a return
    cbreak();
    // Makes the arrow keys work right
    keypad(stdscr,TRUE);
    // Lets the program keep going when a key isn't pressed
    nodelay(stdscr,TRUE);
}

void closeInput(void){
}

int checkInput(int delay){
    int ch = getch();
    int returnCode = 0;
    if (ch == '\n' || ch == '\r' || ch == KEY_ENTER){
        returnCode = 5;
    }
    else if (ch == KEY_LEFT){
        returnCode = 1;
    }
    else if (ch == KEY_RIGHT){
        returnCode = 2;
    }
    else if (ch == KEY_UP){
        returnCode = 3;
    }
    else if (ch == KEY_DOWN){
        returnCode = 4;
    }
    usleep(delay);
    return returnCode;
}