#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	ll range,query;
	cin >> range >> query;
	ll array[range];
	ll sum = 0;
	for(ll i = 0;i<range;i++){
		ll x;cin >> x;
		if(i == 0)sum = x;
		else sum ^= x;
		array[i] = sum;
		//cout << sum << " ";
	}
	vector<pair<ll,ll>> qry;
	vector<ll>ans;
	for(ll i = 1;i<=query;i++){
		ll x,y;
		cin >> x >> y;
		qry.push_back(make_pair(x,y));
	}
	for(ll i = 0;i<query;i++){
		pair<ll,ll> temp = qry[i];
		if(temp.first == 1)cout << array[temp.second-1] << endl;
		else cout << array[temp.second-1]-array[temp.first-2] << endl;
	}
	return 0;
}
