#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        unordered_set<long long> MS;
        int N, M;
        cin >> N >> M;
        for (int j = 0; j < N; j++) {
            long long k;
            cin >> k;
            MS.insert(k);
        }
        for (int i = 0; i < M; i++) {
            long long k;
            cin >> k;
            auto it = MS.find(k);
            if (it != MS.end())
                cout << "YES\n";
            else {
                cout << "NO\n";
                MS.insert(k);
            }
        }
    }
}