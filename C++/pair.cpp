#include <iostream>

using namespace std;
int main()
{
    pair<int, string> a;
    a = make_pair(11, "Prerit");
    cout << a.first << " " << a.second <<endl;
    a = {011, "Prerit Kumar Jain"};
    cout << a.first << " " << a.second;

    // array elements swapping
    int c[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p[3];
    p[0]={1,2};
    p[1]={2,3};
    p[2]={3,4};
    cout<<"Before Swapping\n";
    for(int i=0;i<3;i++)
    cout<<p[i].first << " "<<p[i].second<<endl;  
    swap(p[0],p[2]);
    cout<<"After Swapping\n";
    for(int i=0;i<3;i++)
    cout<<p[i].first << " "<<p[i].second<<endl;   
    return 0;
}
