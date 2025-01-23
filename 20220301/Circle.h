#pragma once
class Circle
{
public:
    // The radius of this circle
    double radius;

    // Construct a default circle object
    Circle();

        // Construct a circle object
        Circle(double newRadius);

        // Return the area of this circle
        double getArea();
};  // Must place a semicolon here