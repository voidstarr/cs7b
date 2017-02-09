#define ONE_LINE 0
#define FOUR_LINE 1

#include <iostream>
#include "heading.h"



int main() {

    Header abc();
    abc.printReport(ONE_LINE);
    abc.printReport(FOUR_LINE);

    Header bigBoss("Big Boss LCC", "Mainframe Status");
    bigBoss.printReport(ONE_LINE);
    bigBoss.printReport(FOUR_LINE);
    return 0;
}
