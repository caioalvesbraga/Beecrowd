#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, rootOfDelta;
    scanf("%lf %lf %lf", &a, &b, &c);
    if((b*b - 4 * a *c) < 0 || a == 0){
        puts("Impossivel calcular");
    } else {
        rootOfDelta = sqrt((b * b) - 4 * a *c );
        printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + rootOfDelta)/(2 * a)), 
        ((-b - rootOfDelta)/(2 * a)));
    }
    return 0;
}