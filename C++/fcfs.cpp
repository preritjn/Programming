#include<iostream>
using namespace std;

int main() {
    int n;
	cout<<"Enter the number of processes : ";
    cin>>n;
	int processes[n],burst_time[n];
    for(int i=0;i<n;i++) 
        cin>>burst_time[i];
	int wt[n], tat[n], total_wt = 0, total_tat = 0;
	wt[0] = 0;
	for (int i = 1; i < n ; i++ )
		wt[i] = burst_time[i-1] + wt[i-1] ;
	for (int i = 0; i < n ; i++)
		tat[i] = burst_time[i] + wt[i];
	for (int i=0; i<n; i++) {
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
	}
	cout << "Average waiting time = "<< (float)total_wt / (float)n<<endl;
	cout << "Average turn around time = "<< (float)total_tat / (float)n<<endl;
	return 0;
}