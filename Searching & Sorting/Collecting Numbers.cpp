#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums;
	int range;
	cin >> range;
	for(int i = 0;i<range;i++){
		int x;cin >> x;
		nums.push_back(x);
	}
	int arr[range+1];
	memset(arr,0,range+1);
	for(int i = 0;i<range;i++){
		arr[nums[i]] =i+1;
	}
	int backedge = 0;
	for(int i = 1;i<=range;i++){
		if(arr[i-1]>arr[i])backedge++;
	}
	cout << backedge + 1;
	return 0;
}
