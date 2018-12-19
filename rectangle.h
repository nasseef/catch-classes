#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <fstream>
using namespace std;

class Rectangle {
public:
    //Constructors
    //Default Constructor
    Rectangle();
    Rectangle(double newLength, double newWidth);
    //getters
    double getLength();
    double getWidth();
    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    //Helper functions
    //void output();
    friend ostream & operator <<(ostream &outs, const Rectangle &r);
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    double area(); //calculate and return the area
private:
    double length;
    double width;
};
#endif
