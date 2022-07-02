#include"Date.h"
#include"Time.h"
#include<string>
using std::string;
#ifndef REPORT_H
#define REPORT_H
//REPORT CLASS DECLARATION
class Report {
  public:
    *Report(int m, int d, int y, int mi, int h, string d);
    void display();
  private:
    string rep_desc;

