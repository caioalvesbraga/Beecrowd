#include <stdio.h>
 
int main() {
    int totalDistance;
    double totalSpentFuel, consumption;
    scanf("%d %lf", &totalDistance, &totalSpentFuel);
    consumption = totalDistance/totalSpentFuel;
    printf("%.3lf km/l\n", consumption);
    return 0;
}