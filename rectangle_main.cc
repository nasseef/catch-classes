/*
 *      Author: Nasseef Abukamail
 *   Date: 1/19/2019
 * Description: test the rectangle class
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "rectangle.h"
using namespace std;


//Other function prototypes

int main() {

    Rectangle r1;//r1 is the object
    Rectangle r2;

    Rectangle all[10];
    for (size_t i = 0; i < 10; i++) {
        cout << all[i] << endl;
    }
    vector <Rectangle> allRectangles;
    cout << "Capacity: " << allRectangles.capacity() << endl;

    allRectangles.push_back(r1);
    allRectangles.push_back(Rectangle(12, 6));
    cout << "Size: " << allRectangles.size() << endl;
    for (size_t i = 0; i < allRectangles.size(); i++) {
        cout << allRectangles[i] << endl;
    }
    cout << "Capacity: " << allRectangles.capacity() << endl;
    cout << allRectangles.back() << endl;

    return 0;
}
