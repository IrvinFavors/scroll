#include "scroll.h"

void handler(unsigned int code){
    printf("Blank: No-pi version of project");
}

int main(void) {
    openDisplay();
    openInput();
    int running = 1, count = 0, entcount = 0, delay = 3500;
    float x = 0, y = 0, xm = 0, ym = 0; delay = 3500;
    while(running) {
        int input = checkInput(delay);
        if(input == 5) {
          ++entcount;
          if (entcount > 1){clearDisplay(); running = 0;}
        }
        if(input == 1) {
            xm--;
        }
        else if(input == 2) {
            xm++;
        }
        else if(input == 3) {
            ym--;
        }
        else if(input == 4) {
            ym++;
        }
        count++;
        x+=(xm/count)*15;y+=(ym/count)*15;
        if (x > 7){x = 0;} if (x<0){x = 7;}
        if (y > 7){y = 0;} if (y<0){y = 7;}

        if (entcount == 1){
            displayLetter('F', (int)x, (int)y);
        }
        if (entcount == 0){
            displayLetter('I', (int)x, (int)y);
        }
    }
    usleep(delay);
    displayLetter(x,y,0);
    closeDisplay();
}