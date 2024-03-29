#include "rectangle.h"

// Empty constructor
Rectangle::Rectangle() : width_(0), height_(0)
{
}

// Implementation of the setWidthHeights method
// ...accepts two double, and sets the corresponding member variables
void Rectangle::setWidthHeight(double width, double height){
    width_ = width;
    height_ = height;
    return;
}

void Rectangle::setWidthHeight(double sides)
{
    setWidthHeight(sides, sides);
}
// Implementation of the area method
// ...calculates and returns the area of the rectangle based on the sides
double Rectangle::area() {
    return width_ * height_;
}

double Rectangle::perimeter()
{
    return 2 * (width_ + height_);
}
