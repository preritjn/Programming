#include<bits/stdc++.h>
using namespace std;

string pangrams(string s) {
    for(auto &ch : s)
        ch = tolower(ch);
    map<char,int> m;
    for(int i = 0; i< s.length();i++) {
        m[s[i]]++;
    }
    char small = 'a';
    for(auto val : m) {
        if(val.first == ' ')
            continue;
        else if(val.first == small) {
            small++;
            continue;
        }
        return "not pangram";
    }
    return "pangram";
}

int main() {
    string s;
    getline(cin, s);
    string o = pangrams(s);
    cout<<o;
    return 0;
}