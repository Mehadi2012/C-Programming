#include<stdio.h>
#include<conio.h>

void main()
{

    int i, Process, sum=0,count=0, y, quantum, Wait_Time=0, Turnaround_Time=0, Burst_Time[10], temp[10],j=0;
    printf(" Enter No. of Process: \n");
    scanf("%d", &Process);
    y = Process;

    printf("Enter the Time Quantum : \n");
    scanf("%d", &quantum);

    printf("Enter Burst time: \n");
    for(i=0; i<Process; i++)
    {
        scanf("%d", &Burst_Time[i]);
        temp[i] = Burst_Time[i];
    }



    printf("Process\t Wait_Time\tTurnaround_Time\tFinish_Time\n");
    for(sum=0, i = 0; y!=0; )
    {
        if(temp[i] <= quantum && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count=1;
        }
        else if(temp[i] > 0)
        {
            temp[i] = temp[i] - quantum;
            sum = sum + quantum;
        }
        if(temp[i]==0 && count==1)
        {
            y--;
            printf("%d\t%d\t\t\t%d \t\t%d\n", i+1,sum-Burst_Time[i], sum, sum);
            Wait_Time = Wait_Time+sum-Burst_Time[i];
            Turnaround_Time = Turnaround_Time+sum;
            count =0;
        }
        if(i==Process-1)
        {
            i=0;
        }
        else if(j<=sum)
        {
            i++;
        }
        else
        {
            i=0;
        }
    }
    getch();
}
