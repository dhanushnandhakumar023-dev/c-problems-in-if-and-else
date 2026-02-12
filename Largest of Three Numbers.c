#include <stdio.h>
int main() {
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if  (num1>num2 &&num1>num3)
    {
        printf(" %d is a Largest Number ",num1);
    }
    else if (num2>num3)
    {
        printf("%d is  Largest number ",num2);
    }
    else
    {
        printf("%d is  Largest Number ",num3);
    }
    return 0;
}
