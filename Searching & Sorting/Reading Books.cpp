#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	vector<ll>num;
	ll range;
	cin >> range;
	ll sum = 0;
	for(ll i  = 0;i<range;i++){
		ll x;cin >> x;
		sum += x;
		num.push_back(x);
	}
	sort(num.begin(),num.end());
	ll high = num[range-1]*2;
	cout << max(high,sum); 
	
	
	
	return 0;
}
