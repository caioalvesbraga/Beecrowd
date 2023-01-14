#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, c, greaterAB, greatest;
    scanf("%d %d %d", &a, &b, &c);
    greaterAB = (a+b+abs(a-b))/2;
    greatest = (greaterAB + c + abs(greaterAB - c))/2;
    printf("%d eh o maior\n", greatest);
    return 0;
}