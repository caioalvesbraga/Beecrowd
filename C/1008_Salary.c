#include <stdio.h>
 
int main() {
    int employeeNum,workedHours;
    double salaryPerHour, totalSalary;
    scanf("%d %d %lf", &employeeNum, &workedHours, &salaryPerHour);
    totalSalary = workedHours * salaryPerHour;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employeeNum, totalSalary);
    return 0;
}