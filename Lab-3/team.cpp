#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define ll long long int


void solve() {  
    
    int n; cin>> n;
    int  ans(0);
    int a, b, c;
    while(n--) {
        cin>> a >> b >> c;
        if(a + b + c>=2) 
            ans++;
         
    }
   
   cout<< ans << endl;

}

int main()  { 
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
     
      solve();
 

    return 0;
}

 


 