#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int 
#define llu unsigned long long int 
#define endl '\n' 

void solve () {
    int n; cin>>n;
    string str; cin>> str;
    
    // int anton=0, danik=0;
 
    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] =='A') 
    //         anton++;
    //     if(str[i] == 'D') 
    //         danik++;
    // } 
    int anton= count(str.begin(), str.end(), 'A');
    int danik= count(str.begin(), str.end(), 'D');
 
    if(anton==danik) 
        cout<<"Friendship";
    else if(anton>danik)    
        cout<< "Anton";
    else 
        cout<<"Danik"; 
}

int main() {

    ios_base ::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 

    solve();
 
    return 0;
}