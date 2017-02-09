#define ONE_LINE 0
#define FOUR_LINE 1

#include <iostream>
#include "heading.h"

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>


int main() {


    // get console width
    int width;
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    width = w.ws_col;
    // ---------------------

    Heading abc;
    abc.setWidth(width);
    abc.printReport(ONE_LINE);
    abc.printReport(FOUR_LINE);

    Heading bigBoss("Big Boss LCC", "Mainframe Status");
    bigBoss.setWidth(width);
    bigBoss.printReport(ONE_LINE);
    bigBoss.printReport(FOUR_LINE);
    return 0;
}
