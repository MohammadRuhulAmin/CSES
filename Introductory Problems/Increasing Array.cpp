#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll range;
	cin >> range;
	ll array[range];
	ll ans = 0;
	for(ll i = 0;i<range;i++)cin >> array[i];
	for(ll i = 1;i<range;i++){
		if(array[i-1]>array[i]){
			ll x = array[i-1] - array[i];
			ans += x;
			array[i]+=x;
		}
	}
	cout << ans;
	return 0;
}
