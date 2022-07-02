//In this file write the "class declaration" for the Webcounter class
#ifndef WEBCOUNTER_H
#define WEBCOUNTER_H
#include<string>
//Class declaration
//Typically in header file
//Webcounter.h
class Webcounter {
  public:
    void hit();
    void reset();
    int get();
    void set(int new_value);
    void load(std::string filename);
    void save(std::string filename);
  private:
    int number_of_visitors;
};
#endif
