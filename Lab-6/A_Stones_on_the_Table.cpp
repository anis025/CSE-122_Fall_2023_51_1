#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 

void solve() {
    int n; cin>> n; 
    string str; cin>>  str; 
    int ans(0); 

    for(int i=0; i<str.length(); i++) {
        if(str[i] == str[i+1]) ans++;
    }

    cout<< ans << endl;
}

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 

    solve();

 
    return 0;
}