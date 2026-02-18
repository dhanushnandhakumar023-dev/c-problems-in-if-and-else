#include <stdio.h>
int main ()
{
    int n,noiselevel,maximumnoise=0,noisyperiods=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&noiselevel);
        if(i==0)
            maximumnoise = noiselevel;
        if(noiselevel > maximumnoise)
            maximumnoise = noiselevel;
        if(noiselevel > 70)
            noisyperiods = noisyperiods + 1;
    }
    printf("Maximum Noise:%d\n",maximumnoise);
    printf("Noisy Periods:%d",noisyperiods);
    return 0;
}
