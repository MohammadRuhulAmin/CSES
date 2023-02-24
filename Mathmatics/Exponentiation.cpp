#include<bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
long long binPow(long long a, long long b){
	if(b == 0)return 1;
	else if(b == 1)return a;
	long long ret = binPow(a,b/2);
	if(b%2) return ret = ((((ret%M)*ret)%M)*a)%M;
	else return ret = ((ret%M)*ret)%M;
}
int main(){
	long long test;
	long long a, b;
	cin >> test;
	while(test--){
		cin >> a >> b;
		long long x = binPow(a,b);
		cout << x << endl;	
	}
	return 0;
}
