#include <stdio.h>

int main() {
    double moneyValue;
    int hundredNotes, fiftyNotes, twentyNotes;
    int tenNotes, fiveNotes, twoNotes;
    double realCoin, halfCoin, quarterCoin;
    double dimeCoin, nickelCoin, pennyCoin;
    
    scanf("%lf", &moneyValue);
    
    puts("NOTAS:");
    hundredNotes = moneyValue/100;
    moneyValue -= hundredNotes*100;
    printf("%d nota(s) de R$ 100.00\n", hundredNotes);
    
    fiftyNotes = moneyValue/50;
    moneyValue -= fiftyNotes*50;
    printf("%d nota(s) de R$ 50.00\n", fiftyNotes);
    
    twentyNotes = moneyValue/20;
    moneyValue -= twentyNotes*20;
    printf("%d nota(s) de R$ 20.00\n", twentyNotes);
    
    tenNotes = moneyValue/10;
    moneyValue -= tenNotes*10;
    printf("%d nota(s) de R$ 10.00\n", tenNotes);
    
    
    fiveNotes = moneyValue/5;
    moneyValue -= fiveNotes*5;
    printf("%d nota(s) de R$ 5.00\n", fiveNotes);
    
    twoNotes = moneyValue/2;
    moneyValue -= twoNotes*2;
    printf("%d nota(s) de R$ 2.00\n", twoNotes);
    
    puts("MOEDAS:");
    realCoin = moneyValue;
    moneyValue -= (int)realCoin;
    printf("%d moeda(s) de R$ 1.00\n", (int)realCoin);
    

    halfCoin = (int)(moneyValue/0.5);
    moneyValue -= halfCoin*0.5;
    printf("%d moeda(s) de R$ 0.50\n", (int)halfCoin);
    
    quarterCoin = (int)(moneyValue/0.25);
    moneyValue -= quarterCoin*0.25;
    printf("%d moeda(s) de R$ 0.25\n", (int)quarterCoin);
    
    dimeCoin = (int)(moneyValue/0.1);
    moneyValue -= dimeCoin*0.1;
    printf("%d moeda(s) de R$ 0.10\n", (int)dimeCoin);
    
    nickelCoin = (int)(moneyValue/0.05);
    moneyValue -= nickelCoin*0.05;
    printf("%d moeda(s) de R$ 0.05\n", (int)nickelCoin);
    
    pennyCoin = (int)(moneyValue/0.01);
    moneyValue -= pennyCoin*0.01;
    printf("%d moeda(s) de R$ 0.01\n", (int)pennyCoin);
    return 0;
}