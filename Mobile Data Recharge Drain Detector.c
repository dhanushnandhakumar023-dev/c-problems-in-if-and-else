#include <stdio.h>
int main ()
{
    int totalData,n,usage,successfulDays=0;
    scanf("%d",&totalData);
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&usage);
        totalData = totalData - usage;
        if (totalData >= 0)
        {
            successfulDays = successfulDays + 1;
        }
    }
    printf("Remaining Data:%d\n",totalData);
    printf("Successful Days:%d",successfulDays);
    return 0;
}
