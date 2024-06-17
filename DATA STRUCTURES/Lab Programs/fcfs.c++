
/* #include <iostream>
using namespace std;
struct ABC {
    int pid, arrival, burst, completion, turnaround, waiting;  };
int main() {
    int i, num, j,temp;
    float total_t = 0.0,total_w=0.0,avg_t,avg_w,sum = 0.0;
    struct ABC p[10];
    cout<<"Enter number of processes : ";
    cin>>num;
    for (i = 0; i < num; i++) {
        cout<<"Enter arrival and burst time for process "<<i + 1<<endl;
        cin>>p[i].arrival>>p[i].burst;
        p[i].pid = i + 1;  }
    for (i = 0; i < num; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (p[j].arrival > p[j + 1].arrival) {
                temp = p[j].arrival;
                p[j].arrival = p[j + 1].arrival;
                p[j + 1].arrival = temp;  }  }  }
    for (i = 0; i < num; i++) {
        if (sum >= p[i].arrival)  {
            sum = sum + p[i].burst;
            p[i].completion = sum;  }
        else {
            sum = p[i].arrival;
            sum = sum + p[i].burst;
            p[i].completion = sum;  }  }
    cout<<"PID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
    for (i = 0; i < num; i++)  {
        p[i].turnaround = p[i].completion - p[i].arrival;
        p[i].waiting=p[i].turnaround-p[i].burst;
        cout<<p[i].pid<<"\t"<<p[i].arrival<<"\t"<<p[i].burst<<"\t"<<p[i].completion<<"\t\t"<<p[i].turnaround<<"\t\t"<<p[i].waiting<<endl;
        total_t+=p[i].turnaround;
        total_w+=p[i].waiting;  }
    cout<<"Average turnaround time : "<<total_t/num<<endl;
    cout<<"Average Waiting time : "<<total_w/num<<endl;
    return 0; }
*/



/*
#include <iostream>
using namespace std;
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}
void findTurnAroundTime(int processes[], int n,
                        int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}
void findavgTime(int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
    cout << "Processes  "
         << " Burst time  "
         << " Waiting time  "
         << " Turn around time\n";
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << i + 1 << "\t\t" << bt[i] << "\t    "
             << wt[i] << "\t\t  " << tat[i] << endl;
    }
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
int main()
{
    int processes[] = {1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
    int burst_time[] = {10, 5, 8};
    findavgTime(processes, n, burst_time);
    return 0;
}
*/
#include<iostream>
 
using namespace std;
 
int main()
{
    int n,bursttime[20],waitingtime[20],turnaroundtime[20],avgwt=0,avgtat=0,i,j;
    cout<<"\n\nEnter total number of processes(maximum 20):";
    cin>>n;
 
    cout<<"\nEnter Process Burst Time\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bursttime[i];
    }
 
   waitingtime[0]=0;    //waiting time for first process is 0
 
    //calculating waiting time
    for(i=1;i<n;i++)
    {
        waitingtime[i]=0;
        for(j=0;j<i;j++)
          waitingtime[i]+=bursttime[j];
    }
 
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
 
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        turnaroundtime[i]=bursttime[i]+waitingtime[i];
        avgwt+=waitingtime[i];
        avgtat+= turnaroundtime[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bursttime[i]<<"\t\t"<< waitingtime[i]<<"\t\t"<< turnaroundtime[i];
    }
 
    avgwt/=i;
    avgtat/=i;
    cout<<"\n\nAverage Waiting Time:"<<avgwt;
    cout<<"\nAverage Turnaround Time:"<<avgtat;
 
    return 0;
}