#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if  (num % 11 == 0)
    {
        printf("%d Divisible by 11",num);
    }
    else
    {
    printf("Not Divisible by 11",num);
    }
    return 0;
}
