#include <stdio.h>

int main() {
    int daysAge, monthsAge, yearsAge;
    scanf("%d", &daysAge);

    yearsAge = daysAge/365;
    daysAge -= yearsAge*365;

    monthsAge = daysAge/30;
    daysAge -= monthsAge*30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", yearsAge, 
    monthsAge, daysAge);
}