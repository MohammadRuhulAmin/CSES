#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll nOfSongs;
	cin >> nOfSongs;
	vector<ll>songs(nOfSongs);
	for(ll i = 0;i<nOfSongs;++i)cin >> songs[i];
	set<ll>heard;
	ll ans = 0;
	ll i = 0,j = 0;
	while(i<nOfSongs && j<nOfSongs){
		while(j<nOfSongs && !heard.count(songs[j])){
			heard.insert(songs[j]);
			ans = max(ans,j-i+1);
			++j;
		}
		while(j<nOfSongs && heard.count(songs[j])){
			heard.erase(songs[i]);
			++i;
		}
	}
	//8
	//1 2 1 3 2 7 4 2
	//i   j
	// 1 2 3 1 2 3
	// i     j
	cout << ans;
	return 0; 
}
