#include <stdio.h>
int main() {
    int Month;
    scanf("%d", &Month);
    switch (Month) {
        case 1:
            printf("January");
            break;
            case 3:
            printf("March");
            break;
            case 5:
            printf("May");
            break;
            case 7:
            printf("July");
            break;
            case 8:
            printf("August");
            break;
            case 10:
            printf("October");
            break;
            case 12:
            printf("December");
            break;
            case 2:
            printf("Febraury");
            break;
        case 4:
            printf("April");
            break;
            case 6:
            printf("June");
            break;
            case 9:
            printf("September");
            break;
            case 11:
            printf("November");
            break;
            default:
            printf("Invalid Month");
            break;
    }
    return 0;
}
