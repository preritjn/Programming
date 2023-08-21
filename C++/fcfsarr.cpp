#include<iostream>
using namespace std;

int main() {
    int n;
	cout<<"Enter the number of processes : ";
	cin>>n;
    int bt[n]={0},at[n]={0},tat[n]={0},wt[n]={0},ct[n]={0},sum=0;
	float totalTAT=0,totalWT=0;
	cout<<"Enter arrival time and burst time for each process : "<<endl;
	for(int i=0;i<n;i++) {
		cout<<"Arrival time of process["<<i+1<<"] : ";
		cin>>at[i];
		cout<<"Burst time of process["<<i+1<<"] : ";
		cin>>bt[i];
	}
	for(int j=0;j<n;j++) {
		sum+=bt[j];
		ct[j]+=sum;
    }
	for(int k=0;k<n;k++) {
		tat[k]=ct[k]-at[k];
		totalTAT+=tat[k];
	}
	for(int k=0;k<n;k++) {
		wt[k]=tat[k]-bt[k];
		totalWT+=wt[k];
	}
	cout<<"Average Turnaround Time : "<<totalTAT/n<<endl;
	cout<<"Average WT : "<<totalWT/n<<endl;
	return 0;
}