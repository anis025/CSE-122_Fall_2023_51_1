
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k; int ans = 0; int flag = 0;
	cin >> n >> k;
 
 
    int a[n]; 
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		flag = a[k];
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] > 0 && a[i] >= flag)ans++;
	}
	cout << ans;
}