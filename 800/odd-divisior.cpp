/*
 author: remonhasan
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve (){
  ll n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main ()
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}