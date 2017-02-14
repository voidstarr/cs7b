#pragma once
#include <iostream>
#include <string>

class Heading {
public:
  Heading() : companyName("ABC Industries"), reportName("Report"){};
  Heading(std::string c, std::string r) : companyName(c), reportName(r){};
  void printReport(int);
  void setWidth(int);

private:
  const std::string stars =
      "********************************************************";

  std::string companyName;
  std::string reportName;
  int consoleWidth = 10;

  void oneLineReport();
  void fourLineReport();
  void centerString(std::string);
};
