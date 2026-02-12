#include <stdio.h>
int main() {
    int Marks;
    scanf("%d",&Marks);
    if  (Marks>=90)
    {
        printf("Grade A");
    }
    else if (Marks>=75 && Marks<=89)
    {
        printf("Grade B");
    }
    else if (Marks>=50 && Marks<=74)
    {
        printf("Grade C");
    }
    else
    {
    printf("Grade D");
    }
    return 0;
}
