#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    ll n; cin>> n;

    int count(0);

    while(n> 0) {
        if(n%10==4 or n%10 == 7)
            count++;
        n/=10; 
    }

    cout<<(count==4 or count == 7 ?  "YES\n" : "NO\n"); 
        

    return 0;
}