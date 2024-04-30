#include "point.h"
#include <iostream>
Point::Point(int tx, int ty):x(tx),y(ty){
    // Empty
}
void Point::show(){
    std::cout << "<x=" << x << ", " << " y=" << y << ">\n";
}
