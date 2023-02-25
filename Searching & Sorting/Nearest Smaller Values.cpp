#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void nearValue(vector<ll>& elem,ll range){
	stack<pair<ll,ll>> mstk;
	for(ll i = 0;i<range;i++){
		ll e = elem[i];
		if(mstk.empty()){
			cout << 0 << " "; 
			mstk.push({e,i});
		}
		else{
			pair<ll,ll> top = mstk.top();
			if(top.first < e){
				cout << top.second + 1 << " ";
				mstk.push({e,i});
			}
			else {
				while(!mstk.empty()){
					ll x = mstk.top().first;
					if(e<=x)mstk.pop();
					else break;
				}
				if(mstk.empty())cout << 0 << " ";
				else cout << mstk.top().second + 1 << " ";
				mstk.push({e,i});
			}
		}	
	}
}

int main(){
	ll range;cin >> range;
	vector<ll>elem;
	for(ll i = 0;i<range;i++){
		ll x;cin >> x;
		elem.push_back(x);
	}
	nearValue(elem,range);
	return 0;
}
