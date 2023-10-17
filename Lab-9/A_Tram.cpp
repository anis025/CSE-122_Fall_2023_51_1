#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int 
#define llu unsigned long long int 
#define endl '\n' 

void solve () {
    int n, a, b, sum(0);
    cin>> n;
 
    int have(0), capacity(0);
 
    while(n--) {
        cin>>a>>b;
 
        have -= a;
        have += b;    
 
        capacity= max(capacity, have);     
 
    }
 
    cout << capacity << endl;
   
}

int main() {

    ios_base ::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 

    solve();
 
    return 0;
}