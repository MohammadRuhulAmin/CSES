#include<bits/stdc++.h>
using namespace std;
 
int frequency(int len,vector<pair<int,int> >&range){
	sort(range.begin(), range.end());
	int max = 0;
	int count = 0;
	for(int i = 0;i<range.size();i++){
		count += range[i].second;
		if(max<count)max = count;
	}
	return max;
}
 
int main(){
	int len;
	cin >> len;
	vector<pair<int,int> > range;
	for(int i = 0;i<len;i++){
		int x,y;cin >> x >> y;
		range.push_back(make_pair(x,1));
		range.push_back(make_pair(y,-1));
	}
	cout << frequency(len,range);
	
	
	return 0;
}
