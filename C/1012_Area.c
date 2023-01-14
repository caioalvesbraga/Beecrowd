#include <stdio.h>
 
int main() {
    double a, b, c, triangle, circle, trapezium, square, rect;
    scanf("%lf %lf %lf", &a, &b, &c);
    triangle = a * c/2;
    circle = 3.14159*(c*c);
    trapezium = (a + b)*c/2;
    square = b*b;
    rect = a * b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\n"
    "TRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", 
    triangle, circle, trapezium, square, rect);
    return 0;
}