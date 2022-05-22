#include<stdio.h>
struct process
{
    int Wait_Time,Arrival_Time,Burst_Time,Turnaround_Time,Priority,Finish_Time;
};

struct process s[10];

int main()
{
    int x,temp[10],count=0,sp;
    printf("Enter the number of the process\n");
    scanf("%d",&x);

    printf("Enter arrival time: \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&s[i].Arrival_Time);

    }
    printf("Enter Burst time: \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&s[i].Burst_Time);
        temp[i]=s[i].Burst_Time;
    }
    printf("Enter priority: \n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&s[i].Priority);

    }
    s[9].Priority=10000000000;

    for(int y=0;count!=x;y++)
    {
        sp=9;
        for(int i=0;i<x;i++)
        {
            if(s[sp].Priority>s[i].Priority && s[i].Arrival_Time<=y && s[i].Burst_Time>0)
            {
                sp=i;
            }
        }

        s[sp].Burst_Time=s[sp].Burst_Time-1;
        if(s[sp].Burst_Time==0)
        {

            count++;
            s[sp].Wait_Time=y+1-s[sp].Arrival_Time-temp[sp];
            s[sp].Turnaround_Time=y+1-s[sp].Arrival_Time;
            s[sp].Finish_Time=y+1;

        }
    }
    printf("Process\t Wait_Time\tTurnaround_Time\tFinish_Time\n");
    for(int i=0;i<x;i++)
    {
        printf("%d\t %d\t\t %d\t\t\t %d\n",i+1,s[i].Wait_Time,s[i].Turnaround_Time,s[i].Finish_Time);
    }

    return 0;
}
