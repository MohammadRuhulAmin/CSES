#include<bits/stdc++.h>
#define m 1000000007
#define ll long long 
using namespace std;
ll powerOfTwo(ll n){
	ll x = 1;
	for(ll i = 1;i<=n;i++){
		x = (x%m)*2;
	}
	return x%m;
}
int main(){
	ll n;
	cin >> n;
	cout << powerOfTwo(n);
	return 0;
}
