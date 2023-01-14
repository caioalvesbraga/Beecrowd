#include <stdio.h>
 
int main() {
    int codeProd1, unitsProd1, codeProd2, unitsProd2;
    double priceProd1, priceProd2, total;
    scanf("%d %d %lf", &codeProd1, &unitsProd1, &priceProd1);
    scanf("%d %d %lf", &codeProd2, &unitsProd2, &priceProd2);
    total = unitsProd1*priceProd1 + unitsProd2*priceProd2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}