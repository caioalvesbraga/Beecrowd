#include <stdio.h>
 
int main() {
    char employeeName;
    double fixedSalary, totalSalesMonth, totalSalary;
    scanf("%s %lf %lf", &employeeName, &fixedSalary, &totalSalesMonth);
    totalSalary = fixedSalary + totalSalesMonth * .15;
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}