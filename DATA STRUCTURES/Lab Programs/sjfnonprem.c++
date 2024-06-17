
#include <iostream>
using namespace std;
struct PCB
{
    int pid, arrival, burst, completion, turnaround, waiting;
};
int main()
{
    int i, num, j;
    bool is_completed[100] = {false};
    int completed = 0,current_time = 0;
    float total_t = 0.0 , total_w=0.0 , avg_t , avg_w;
    struct PCB p[10] , temp;
    cout<<"\n\nEnter number of processes : ";
    cin>>num;
    for (i = 0; i < num; i++)
    {
        cout<<"Enter arrival and burst time for process "<<i + 1<<endl;
        cin>>p[i].arrival>>p[i].burst;
        p[i].pid = i + 1;
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (p[j].arrival > p[j + 1].arrival)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    while (completed != num)
    {
        int min_index = -1;
        int minimum = 1000;
        for (int i = 0; i < num; i++)
        {
            if (p[i].arrival <= current_time && is_completed[i] == false && p[i].burst < minimum)
            {
                    minimum = p[i].burst;
                    min_index = i;
            }
        }
        if (min_index == -1)
        {
            current_time++;
        }
        else
        {
            p[min_index].completion = current_time + p[min_index].burst;
            completed++;
            is_completed[min_index] = true;
            current_time = p[min_index].completion;
        }
    }
    cout<<"PID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
    for (i = 0; i < num; i++)
    {
        p[i].turnaround = p[i].completion - p[i].arrival;
        p[i].waiting=p[i].turnaround-p[i].burst;
        cout<<p[i].pid<<"\t"<<p[i].arrival<<"\t"<<p[i].burst<<"\t\t"<<p[i].completion<<"\t\t"<<p[i].turnaround<<"\t"<<p[i].waiting<<endl;
        total_t+=p[i].turnaround;
        total_w+=p[i].waiting;
    }
    cout<<"Average turnaround time : "<<total_t/num<<endl;
    cout<<"Average waiting time : "<<total_w/num<<endl;
    return 0;
}
