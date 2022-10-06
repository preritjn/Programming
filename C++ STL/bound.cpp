#include<bits/stdc++.h>
using namespace std;

// incase of array

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     cout<<endl;
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//     cout<<endl;
//     int x;
//     cin>>x;
//     int *ptr=lower_bound(arr,arr+n,x);
//     if(ptr == arr+n) {
//         cout<<"Not Found"<<endl;
//         return 0;
//     }
//     cout<<*ptr<<endl;
//     return 0;
// }

// incase of vectors

// int main() { 
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//         cin>>v[i];
//     cout<<endl;
//     sort(v.begin(),v.end());

//     for(int i=0;i<n;i++)
//         cout<<v[i]<<" ";
//     cout<<endl;
//     int x;
//     cin>>x;
//     auto it=upper_bound(v.begin(),v.end(),x);
//     if(it == v.end()) {
//         cout<<"Not Found";
//         return 0;
//     }
//     cout<<*it<<endl;
//     return 0;
// }

// incase of sets and maps

int main() {
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        s.insert(rand());
    }
    int a;
    cin>>a;
    auto it = s.lower_bound(a);
    if(it==s.end()) {
        cout<<"Not Found"<<endl;
        return 0;
    }
    cout<<*it<<endl;    
    return 0;
}