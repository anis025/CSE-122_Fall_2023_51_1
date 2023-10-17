#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int 
#define llu unsigned long long int 
#define endl '\n' 

void solve () {
    string a, b; cin>>a >>b;
    reverse(b.begin(), b.end());
    
    cout<< (a == b ?  "YES\n"  :  "NO\n");
   
}

int main() {

    ios_base ::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 

    solve();
 
    return 0;
}