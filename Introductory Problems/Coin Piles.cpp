#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll range;
	ll x,y;
	cin >> range;
	while(range--){
		bool noSln = false;
		cin >> x >> y;
		ll sum = x+y;
		if(x>2*y  || y>2*x)noSln = true;
		if(sum%3 == 0  && !noSln)cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
