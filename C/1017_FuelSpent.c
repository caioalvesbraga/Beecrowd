#include <stdio.h>
 
int main() {
    int spentTime, avrgSpeed, distance;
    double necessaryFuel;
    scanf("%d %d", &spentTime, &avrgSpeed);
    distance = avrgSpeed*spentTime;
    necessaryFuel = distance/12.0;
    printf("%.3lf\n", necessaryFuel);
    return 0;
}