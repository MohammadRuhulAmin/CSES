#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n;
	scanf("%lld",&n);
	for(ll i = 1;i<=n;i++){
		ll total = (i*i)*((i*i)-1)/2;
		ll attack = 4*(i-1)*(i-2);
		ll noAttack = total-attack ;
		printf("%lld\n",noAttack);
	}
	
	return 0;
}
