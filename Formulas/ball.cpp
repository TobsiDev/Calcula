
#include "ball.h"
#include <math.h>

double volBall(double radius) // V = 4/3 * Pi * r^3
{
    double pi = 3.1415926535;
    return (4.0 / 3.0 * pi * pow(radius, 3));
}