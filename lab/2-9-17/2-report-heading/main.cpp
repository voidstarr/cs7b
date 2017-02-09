#define ONE_LINE 0
#define FOUR_LINE 1

#include "heading.h"
#include <iostream>

#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

Heading createHeading();

int main() {

  // get console width
  int width;
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  width = w.ws_col;
  // ---------------------

  // Heading abc;
  // abc.setWidth(width);
  // abc.printReport(ONE_LINE);
  // abc.printReport(FOUR_LINE);

  std::string comp;
  std::string rep;
  
  Heading h = createHeading();

  h.setWidth(width);
  h.printReport(ONE_LINE);
  h.printReport(FOUR_LINE);
  return 0;
}

Heading createHeading() {

  std::string comp;
  std::string rep;

  std::cout << "Enter name of company (blank for default): " << std::endl
            << ">> ";
  std::getline(std::cin, comp);
  if (comp.length() != 0) {
    std::cout << "Enter name of report:" << std::endl << ">> ";
    std::getline(std::cin, rep);
    return Heading(comp, rep);
  } else {
    return Heading();
  }
}
