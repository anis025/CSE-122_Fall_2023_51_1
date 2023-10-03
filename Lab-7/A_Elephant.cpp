  
#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 
 
void solve() {
    int a, f = 0; 
    cin >> a;  

    cout<< (a % 5 == 0? a/ 5 : (a/5) +1) << endl; 
 
}

int  main() { 

    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 

    solve(); 
      

    return 0 ;
}

