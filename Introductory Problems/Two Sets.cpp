#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	bool taken[n+1];
	ll set_x = 0;
	memset(taken,false,sizeof(taken));
	ll  sum= n*(n+1)/2;
	if(sum%2 == 0){
		ll sum_x = sum/2;
		ll cal = 0;
		for(ll i = n;i>=1;i--){
			if(cal ==sum_x)break;
			else if(cal+i<=sum_x){
				cal+=i;
				taken[i] = true;
				set_x++;
			}
		}
		cout << "YES\n";
		cout << set_x << "\n";
		for(ll i = n;i>=1;i--)if(taken[i])cout << i << " ";
		cout << "\n";
		cout << n-set_x << "\n";
		for(ll i = n;i>=1;i--)if(!taken[i])cout << i <<" ";
	}
	else cout << "NO";
	return 0;
}
