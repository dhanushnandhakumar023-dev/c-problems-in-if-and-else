#include <stdio.h>
int main()
{
    int n,overtimehours,totalhours=0,overtimecost,heavyovertimedays=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&overtimehours);
        totalhours = totalhours + overtimehours;
        if (overtimehours > 3)
        {
            heavyovertimedays = heavyovertimedays + 1 ;
        }
    }
    overtimecost = totalhours * 200;
    printf("Total Overtime Hours:%d\n",totalhours);
    printf("Overtime Cost:%d\n",overtimecost);
    printf("Heavy Overtime Days:%d",heavyovertimedays);
    return 0;
}
