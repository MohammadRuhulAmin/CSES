#include<bits/stdc++.h>
using namespace std;
 
int max_movies(int n ,vector<pair<int,int> > &vec){
	sort(vec.begin(),vec.end(),[](pair<int,int> &a , pair<int,int> &b){
		return a.second < b.second;
	});
	int endTime = 0;
	int count = 0;
	for(int i = 0;i<n;i++){
		if(vec[i].first >= endTime){
			count++;
			endTime = vec[i].second;
		}
	}
	return count;
}
 
int main(){
	int n;
	cin >> n;
	vector<pair<int,int> > vec;
	for(int i = 0;i<n;i++){
		int x,y;
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
	}
	
	cout << max_movies(n,vec);
	
	
	
	return 0;
}
