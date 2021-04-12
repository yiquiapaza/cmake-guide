#include "Rectangle.h"

Rectangle::Rectangle ()
{
    width = 0;
    height = 0;
}
Rectangle::Rectangle (int w, int h)
{
    width = w;
    height = h;
}
int Rectangle::area()
{
    return width * height;
}