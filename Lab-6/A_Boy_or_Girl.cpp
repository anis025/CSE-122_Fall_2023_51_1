#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 

void solve() {
    string str; cin>> str; 
    int ans(0); 
    sort(str.begin(), str.end()) ; 

    for(int i=1; i<str.length(); i++) {
        if(str[i] != str[i-1]) 
            ans++;
    } 

    (ans&1) ? cout<<"CHAT WITH HER!\n" : cout<<"IGNORE HIM!\n";
}

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 

    solve();

 
    return 0;
}