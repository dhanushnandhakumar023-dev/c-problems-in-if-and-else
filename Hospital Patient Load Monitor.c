#include<stdio.h>
int main(){
    int N,patients,totalPatients=0,overcrowdedDays=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&patients);
        totalPatients += patients;
        if(patients > 100){
            overcrowdedDays++;
        }
    }
    printf("Total Patients: %d\n", totalPatients);
    printf("Overcrowded Days: %d", overcrowdedDays);
    return 0;
}
