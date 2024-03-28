#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
struct process{
	int PID;
	int arival_time;
	int burst_time;
	int completion_time;
	int turnaround_time;
	int waiting_time;
};
void findCompletion_time(process proc[],int n){
	proc[0].completion_time = proc[0].burst_time;
	for(int i=1;i<n;i++){
		proc[i].completion_time = proc[i-1].completion_time+proc[i].burst_time;
	}
}
void findTurnaround_time(process proc[],int n){
	for(int i=0;i<n;i++){
		proc[i].turnaround_time = proc[i].completion_time - proc[i].arival_time;
	}
}
void findWaiting_time(process proc[],int n){
	proc[0].waiting_time = 0;
	for(int i=1;i<n;i++){
		proc[i].waiting_time = proc[i].turnaround_time-proc[i].burst_time;
		if(proc[i].waiting_time<0) proc[i].waiting_time = 0;
	}
}
void printFCFS(process proc[],int n){
	cout << "FCFS Scheduling ! \n";
	cout << "PID\tAT\tBT\tCT\tTAT\tWT" << endl;

  for (int i = 0; i < n; i++) {
    cout << 'p'<<proc[i].PID << "\t" << proc[i].arival_time << "\t"<< proc[i].burst_time << "\t";
    cout << proc[i].completion_time << "\t"<< proc[i].turnaround_time << "\t" << proc[i].waiting_time << endl;
  }
}
int32_t main(){
	code();
	int n = 5;
	process proc[5] = {{1, 0, 5}, {2, 1, 3}, {3, 2, 2}, {4, 3, 4}, {5, 4, 1}};
	findCompletion_time(proc,n);
	findTurnaround_time(proc,n);
	findWaiting_time(proc,n);
	printFCFS(proc,n);

}