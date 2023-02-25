#include<bits/stdc++.h>
using namespace std;

vector<int> sumOfFourValues(vector<int>nums,int n,int x){
	map<int,pair<int,int> >container;
	vector<int>ans;
	for(int i = 0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(container.count(x-nums[i]-nums[j])){
				ans.push_back(i+1);ans.push_back(j+1);
				ans.push_back(container[x-nums[i]-nums[j]].first);
				ans.push_back(container[x-nums[i]-nums[j]].second);
				return ans;
			}
		}
		for(int j = 0;j<i;j++){
			container[nums[i]+nums[j]] = {i+1,j+1};
		}
	}
	return ans;
}

int main(){
	int n,x;
	cin >> n >> x;
	vector<int>nums;
	for(int i = 0;i<n;i++){
		int x;cin >> x;
		nums.push_back(x);
	}
	vector<int>ans = sumOfFourValues(nums,n,x);
	if(ans.size()){
		for(auto &x:ans){
			cout << x << " ";
		}
	}
	else cout << "IMPOSSIBLE";
	
	
	return 0;
}
