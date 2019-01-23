/*
 *        File: rectangle.cc
 *      Author: Nasseef Abukamail
 *        Date: January 19, 2019
 * Description: Implementation file for the Rectangle classs.
 * Requires "rectangle.h"
 */

#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(){
    width = 1;
    length = 1;
}
Rectangle::Rectangle(double newLength, double newWidth) {
    length = width = 1;
    if (newLength > 0) {
        length = newLength;
    }
    if (newWidth > 0) {
        width = newWidth;
    }
}
void Rectangle::setLength(double newLength){
    if (newLength > 0) {
        length = newLength;
    }
    else {
        length = 1;
    }
}
void Rectangle::setWidth(double newWidth){
    if (newWidth > 0) {
        width = newWidth;
    }
    else {
        width = 1;
    }
}

double Rectangle::getLength(){
    return length;
}
double Rectangle::getWidth(){
    return width;
}
ostream & operator <<(ostream &outs, const Rectangle &r){
    outs << "(" << r.length << " x " << r.width << ")";
    return outs;
}
bool operator ==(const Rectangle &r1, const Rectangle &r2) {
    if (r1.width == r2.width && r1.length == r2.length)
        return true;
    return false;
}
double Rectangle::area() {
    return length * width;
}
