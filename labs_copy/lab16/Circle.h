#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
  public:
    void set(float r);
    float get_area();
    float get_circumference();
  private:
    float radius;
};
#endif
