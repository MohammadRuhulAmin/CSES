#include<bits/stdc++.h>
using namespace std;

int numberOfTowers(vector<int>&cubes,int ranges){
	multiset<int> cset;
	for(int i = 0;i<ranges;i++){
		int x = cubes[i];
		if(cset.size() == 0)cset.insert(x);
		else {
			auto it = cset.upper_bound(x);
			if(it == cset.end())cset.insert(x);
			else{
				cset.erase(it);
				cset.insert(x);
			}
		}
	}
	return cset.size();
}

int main(){
	int ranges;
	scanf("%d",&ranges);
	vector<int> cubes;
	for(int i = 0;i<ranges;i++){
		int x;scanf("%d",&x);
		cubes.push_back(x);
	}
	printf("%d",numberOfTowers(cubes,ranges));
	return 0;
}
