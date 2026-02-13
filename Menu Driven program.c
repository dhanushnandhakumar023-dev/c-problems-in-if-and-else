#include <stdio.h>
int main() {
    int choice,num1,num2;
    printf("1.sum\n 2.difference\n3.product\n 4.division\n");
    scanf("%d\n",&choice);
    scanf("%d %d",&num1,&num2);
    switch (choice) {
        case 1:
            printf("%d",num1+num2);
            break;
        case 2:
            printf("%d",num1-num2);
            break;
        case 3:
            printf("%d",num1*num2);
            break;
        case 4:
            printf("%d",num1/num2);
            break;
        default:
            printf("Invalid operation");
            break;
    }
    return 0;
}
