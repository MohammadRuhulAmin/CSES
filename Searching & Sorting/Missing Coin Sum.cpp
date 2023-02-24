#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll range;
	cin >> range;
	ll array[range];
	for(ll i = 0;i<range;i++)cin >> array[i];
	ll ans = 1;
	sort(array,array+range);
	for(ll i = 0;i<range;i++){
		if(ans<array[i])break;
		else{
			ans+=array[i];
		}
	}
	cout << ans;
	return 0;
}
