#include <stdio.h>
 
int main() {
    double volume, radius, pi = 3.14159;
    scanf("%lf", &radius);
    volume = 4.0/3 * pi * (radius*radius*radius);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}