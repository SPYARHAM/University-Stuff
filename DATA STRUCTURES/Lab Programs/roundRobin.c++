/*  #include<iostream> 
using namespace std; 
// Function to find the waiting time for all 
// processes 
void findWaitingTime(int processes[], int n, 
			int bt[], int wt[], int quantum) 
{ 
	// Make a copy of burst times bt[] to store remaining 
	// burst times. 
	int rem_bt[n]; 
	for (int i = 0 ; i < n ; i++) 
		rem_bt[i] = bt[i]; 
	int t = 0; // Current time 
	// Keep traversing processes in round robin manner 
	// until all of them are not done. 
	while (1) 
	{ 
		bool done = true; 
		// Traverse all processes one by one repeatedly 
		for (int i = 0 ; i < n; i++) 
		{ 
			// If burst time of a process is greater than 0 
			// then only need to process further 
			if (rem_bt[i] > 0) 
			{ 
				done = false; // There is a pending process 
				if (rem_bt[i] > quantum) 
				{ 
					// Increase the value of t i.e. shows 
					// how much time a process has been processed 
					t += quantum; 
					// Decrease the burst_time of current process 
					// by quantum 
					rem_bt[i] -= quantum; 
				} 
				// If burst time is smaller than or equal to 
				// quantum. Last cycle for this process 
				else
				{ 
					// Increase the value of t i.e. shows 
					// how much time a process has been processed 
					t = t + rem_bt[i]; 
					// Waiting time is current time minus time 
					// used by this process 
					wt[i] = t - bt[i]; 
					// As the process gets fully executed 
					// make its remaining burst time = 0 
					rem_bt[i] = 0; 
				} 
			} 
		} 
		// If all processes are done 
		if (done == true) 
		break; 
	} 
} 
// Function to calculate turn around time 
void findTurnAroundTime(int processes[], int n, 
						int bt[], int wt[], int tat[]) 
{ 
	// calculating turnaround time by adding 
	// bt[i] + wt[i] 
	for (int i = 0; i < n ; i++) 
		tat[i] = bt[i] + wt[i]; 
} 
// Function to calculate average time 
void findavgTime(int processes[], int n, int bt[], 
									int quantum) 
{ 
	int wt[n], tat[n], total_wt = 0, total_tat = 0; 
	// Function to find waiting time of all processes 
	findWaitingTime(processes, n, bt, wt, quantum); 
	// Function to find turn around time for all processes 
	findTurnAroundTime(processes, n, bt, wt, tat); 
	// Display processes along with all details 
	cout << "Processes "<< " Burst time "
		<< " Waiting time " << " Turn around time\n"; 
	// Calculate total waiting time and total turn 
	// around time 
	for (int i=0; i<n; i++) 
	{ 
		total_wt = total_wt + wt[i]; 
		total_tat = total_tat + tat[i]; 
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<endl; 
	} 
	cout << "Average waiting time = "
		<< (float)total_wt / (float)n; 
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n; 
} 
int main() 
{ 
    int pid ; int processes[20];
	// process id's 
    cout<<"Enter  number of processes: ";
    cin>>pid;
    for (int i=0;i<pid;i++) {
        int processes[pid];
    }
	int n = sizeof processes / sizeof processes[0]; 
	// Burst time of all processes 
	int burst_time[] = {10, 5, 8}; 
	// Time quantum 
	int quantum = 2; 
	findavgTime(processes, n, burst_time, quantum); 
	return 0; 
}
*/

#include<iostream>
#include<queue>
using namespace std;

typedef struct process {
  int id,arrival,burst,st,ft,pr;
  float waiting,turnaround;
   }process;

    process p[10],p1[10],temp;
    queue<int> q1;
    int accept(int ch);
    void turnwait(int n);
    void display(int n);
    void ganttrr(int n);

int main()  {
  int i,n,ts,ch,j,x;
  p[0].turnaround=0;
  p[0].waiting=0;
  n=accept(ch);
  ganttrr(n);
  turnwait(n);
  display(n);
  return 0;   }
int accept(int ch)  {
  int i,n;
 cout<<"\n\nEnter the Total Number of Process: ";
  cin>>n;
 if(n==0) {
    cout<<"Invalid";
    exit(1);  }
    cout<<endl;
  for(i=1;i<=n;i++)  {
  cout<<"Enter an Arrival Time of the Process P"<<i<<":";
    cin>>p[i].arrival;
    p[i].id=i;  }
    cout<<endl;
  for(i=1;i<=n;i++)  {
    cout<<"Enter a Burst Time of the Process P"<<i<<":";
    cin>>p[i].burst; } 
    for(i=1;i<=n;i++)  {
        p1[i]=p[i];  }
    return n;
}

void ganttrr(int n)  { 
  int i,ts,m,nextval,nextarr; 
  nextval=p1[1].arrival;
  i=1;
  cout<<"\nEnter the Time Slice or Quantum: ";
  cin>>ts;
  for(i=1;i<=n && p1[i].arrival<=nextval;i++)  {
    q1.push(p1[i].id); }
  while(!q1.empty())  { 
    m=q1.front();
    q1.pop();
    if(p1[m].burst>=ts)  {
      nextval=nextval+ts;  } 
    else  {
      nextval=nextval+p1[m].burst; }   
    if(p1[m].burst>=ts)  {
      p1[m].burst=p1[m].burst-ts;  } 
    else  {
      p1[m].burst=0; }   
    while(i<=n&&p1[i].arrival<=nextval) {
      q1.push(p1[i].id);
      i++;  }
    if(p1[m].burst>0)  {
      q1.push(m);  }
    if(p1[m].burst<=0)  {
      p[m].ft=nextval;  }    }   }

void turnwait(int n)  {
    for(int i=1;i<=n;i++)  {
        p[i].turnaround=p[i].ft-p[i].arrival;
        p[i].waiting=p[i].turnaround-p[i].burst;
        p[0].turnaround=p[0].turnaround+p[i].turnaround;
        p[0].waiting=p[0].waiting+p[i].waiting;   }   
        p[0].turnaround=p[0].turnaround/n;
        p[0].waiting=p[0].waiting/n; }

void display(int n) {
  int i;
  cout<<"\nProcess\t\tAT\tBT\tFT\tTAT\tWT";
  for(i=1;i<=n;i++)  {
  cout<<"\nP"<<p[i].id<<"\t\t"<<p[i].arrival<<"\t"<<p[i].burst<<"\t"<<p[i].ft<<"\t"<<p[i].turnaround<<"\t"<<p[i].waiting;  }
   cout<<"\nAverage Turn Around Time: "<<p[0].turnaround;
   cout<<"\nAverage Waiting Time: "<<p[0].waiting;  }