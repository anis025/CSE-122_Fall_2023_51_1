
#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 


void solve()   {
   int n, k; cin>> n >> k;
 
 
   for(int i=0; i<k; i++) {
        if(n%10 ==0) n/=10;
        else n--;
   }
 
 
   cout<< n << endl;
  
 } 
  

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 
    


}
