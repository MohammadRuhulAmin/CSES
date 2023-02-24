#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	multiset<int>mset;
	vector<int>cl;
	for(int i = 0;i<n;++i){
		int x;cin >> x;
		mset.insert(x);
	}
	for(int i = 0;i<m;++i){
		int x;cin >> x;
		cl.push_back(x);
	}
	for(int i = 0;i<m;++i){
		int x = cl[i];
		auto ptr = mset.upper_bound(x);
		if(ptr == mset.begin())cout << -1 << endl;
		else{
			--ptr;
			cout << *ptr << endl;
			mset.erase(ptr);
		}
	}
	return 0;
}
