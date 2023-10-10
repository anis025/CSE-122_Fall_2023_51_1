#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


void solve() {
    string str; cin>> str; 
    int low = 0, up  = 0; 

    for(int i=0; i<str.length(); i++) {
        if(islower(str[i])) low++;
        else up++;
    }

    (up > low) ? transform(str.begin(), str.end(), str.begin(), :: toupper) : transform(str.begin(), str.end(), str.begin(), :: tolower); 
    cout<< str <<endl; 
}

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(0);  cout.tie(0); 

    solve(); 
  
    return 0;
}