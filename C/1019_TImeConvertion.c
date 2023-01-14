#include <stdio.h>
 
int main() {
    int duration, hours, minutes, seconds;
    
    scanf("%d", &duration);
    
    hours = duration/3600;
    duration = duration%3600;
    
    minutes = duration/60;
    duration = duration%60;
    
    seconds = duration;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}