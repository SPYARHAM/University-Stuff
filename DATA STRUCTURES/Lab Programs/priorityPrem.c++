#include<iostream>
using namespace std;
 
int main()
{
    int burst[20],process[20],waiting[20],turnaround[20],pr[20],i,j,n,total=0,position,temp,avg_wt,avg_tat;
    cout<<"\n\nEnter Total Number of Process:";
    cin>>n;
 
    cout<<"\nEnter Burst Time and Priority\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nP["<<i+1<<"]\n";
        cout<<"Burst Time:";
        cin>>burst[i];
        cout<<"Priority:";
        cin>>pr[i];
        process[i]=i+1;           //contains process number
    }
 
    //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[position])
                position=j;
        }
 
        temp=pr[i];
        pr[i]=pr[position];
        pr[position]=temp;
 
        temp=burst[i];
        burst[i]=burst[position];
        burst[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;
    }
 
    waiting[0]=0;            //waiting time for first process is zero
 
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        waiting[i]=0;
        for(j=0;j<i;j++)
            waiting[i]+=burst[j];
        total+=waiting[i];
    }
 
    avg_wt=total/n;      //average waiting time
    total=0;
 
    cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        turnaround[i]=burst[i]+waiting[i];     //calculate turnaround time
        total+=turnaround[i];
        cout<<"\nP["<<process[i]<<"]\t\t  "<<burst[i]<<"\t\t    "<<waiting[i]<<"\t\t\t"<<turnaround[i];
    }
 
    avg_tat=total/n;     //average turnaround time
    cout<<"\n\nAverage Waiting Time="<<avg_wt;
    cout<<"\nAverage Turnaround Time="<<avg_tat;
 
    return 0;
}
