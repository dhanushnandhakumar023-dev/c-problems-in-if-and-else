#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a%4==0 && a%400== a%100!=0)
        {
        printf("%d is Leap Year",a);
    } else {
        printf("%d Not Leap Year",a);
    }
    return 0;
}
