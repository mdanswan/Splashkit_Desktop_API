#include "Bound.h"

using namespace std;
using namespace splashkit_desktop;

Bound::Bound() : x(0), y(0), width(0), height(0) {}

Bound::Bound(int x, int y, int width, int height)
{
    set_x(x);
    set_y(y);
    set_width(width);
    set_height(height);
}

/**
 * Getters and Setters
 */
int Bound::get_x()
{
    return this->x;
}

int Bound::get_y()
{
    return this->y;
}

int Bound::get_width()
{
    return this->width;
}

int Bound::get_height()
{
    return this->height;
}

void Bound::set_x(int x)
{
    this->x = x;
}

void Bound::set_y(int x)
{
    this->x = x;
}

void Bound::set_width(int width)
{
    this->width = width;
}

void Bound::set_height(int height)
{
    this->height = height;
}