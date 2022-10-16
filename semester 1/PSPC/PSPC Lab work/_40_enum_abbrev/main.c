#include <stdio.h>
enum weekday{sun, mon, tue, wed, thu, fri, sat};
int main(){
    enum weekday w1;
    w1 = thu;
    printf("%d", w1);
    return 0;
}
