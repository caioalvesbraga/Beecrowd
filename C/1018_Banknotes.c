#include <stdio.h>
#include <math.h>
 
int main() {
    int value, auxValue;

    scanf("%d", &value);
    printf("%d\n", value);

    printf("%d nota(s) de R$ 100,00\n", value/100);
    auxValue = value%100;

    printf("%d nota(s) de R$ 50,00\n", auxValue/50);
    auxValue = auxValue%50;

    printf("%d nota(s) de R$ 20,00\n", auxValue/20);
    auxValue = auxValue%20;

    printf("%d nota(s) de R$ 10,00\n", auxValue/10);
    auxValue = auxValue%10;

    printf("%d nota(s) de R$ 5,00\n", auxValue/5);
    auxValue = auxValue%5;

    printf("%d nota(s) de R$ 2,00\n", auxValue/2);
    auxValue = auxValue%2;

    printf("%d nota(s) de R$ 1,00\n", auxValue);
    
    return 0;
}