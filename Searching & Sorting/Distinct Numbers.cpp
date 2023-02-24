#include<bits/stdc++.h>
using namespace std;
#include<set>
#define ll  long long
int main(){
	ll range;
	cin >> range;
	set<int>s;
	ll array[range+1];
	ll max_n = INT_MIN;
	for(ll i = 1;i<=range;i++){
		cin >> array[i];
		s.insert(array[i]);
	}
	cout << s.size();
	return 0;
}
