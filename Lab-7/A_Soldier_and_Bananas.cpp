
 #include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 
 
void solve() {
    int k , n, w;  cin>> k >> n >> w; 
    int sum = 0; 

    for(int i=1; i<=w; i++) {
        sum += i; 
    }

    int m = sum*k; 
    int ans = m-n;  
  
    
    cout<< ( ans < 0 ? 0 : ans )<< endl;
}

int  main() { 

    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 

    solve(); 
      

    return 0 ;
}


 




