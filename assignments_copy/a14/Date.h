#ifndef DATE_H
#define DATE_H
#include<string>

class Date {
  public:
    void set(int mn, int dy, int yr);
    void display();
    std::string get_month_name();
  private:
    int month;
    int day;
    int year; 
};

//void set(Date& self, int mn, int dy, int yr);
//void display(Date& self);
//std::string get_month_name(Date& self);

#endif
