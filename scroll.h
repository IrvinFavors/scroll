#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <math.h>

void openDisplay(void);

void closeDisplay(void);

void displayLetter(char, int, int);

void clearDisplay(void);

void openInput(void);

void closeInput(void);

int checkInput(int delay);