#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define ll long long int


void solve() {  
    int test; cin>> test; 
    while(test--) {
        string str; cin>> str;
        (str.length() > 10) ? cout<< str[0] << str.length()-2 << str[str.length()-1]<< '\n' : cout<< str << endl;
    }

}

int main()  { 
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    solve();

    return 0;
}

  