#pragma once
#include "Circle.h"
    Circle::Circle()
    {
        radius = 1;
    }

    // Construct a circle object
    Circle::Circle(double newRadius)
    {
        radius = newRadius;
    }

    // Return the area of this circle
    double Circle::getArea()
    {
        return radius * radius * 3.14159;
    }
 // Must place a semicolon here