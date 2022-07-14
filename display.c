#include "scroll.h"

#define BLUE 1
#define YELLOW 2

void openDisplay(void) {
    initscr();
    start_color();
    init_pair(BLUE, COLOR_BLUE, COLOR_BLUE);
    init_pair(YELLOW, COLOR_YELLOW, COLOR_YELLOW);
}

void closeDisplay(void) {
    endwin();
}

void displayLetter(char l, int xoff, int yoff) {
    clearDisplay();
    if (l == 'I'){
        for (int i = 1; i < 5; ++i){
            attron(COLOR_PAIR(BLUE));
            int xo = i+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = 0+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
        for (int i = 0; i < 5; ++i){
            attron(COLOR_PAIR(BLUE));
            int xo = 3+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = i+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
        for (int i = 1; i < 5; ++i){
            attron(COLOR_PAIR(BLUE));
            int xo = i+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = 4+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
    }
    if (l == 'F'){
        for (int i = 1; i < 5; ++i){
            attron(COLOR_PAIR(YELLOW));
            int xo = i+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = 0+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
        for (int i = 0; i < 5; ++i){
            attron(COLOR_PAIR(YELLOW));
            int xo = 0+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = i+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
        for (int i = 1; i < 3; ++i){
            attron(COLOR_PAIR(YELLOW));
            int xo = i+xoff;
            if(xo > 7){xo = xo % 7;}
            if(xo < 0){xo = xo % 7;}
            int yo = 2+yoff;
            if(yo > 7){yo = yo % 7;}
            if(yo < 0){yo = yo % 7;}
            mvaddch(yo,xo,' ');
        }
    }
    refresh();
}

void clearDisplay(void){
    clear();
}
