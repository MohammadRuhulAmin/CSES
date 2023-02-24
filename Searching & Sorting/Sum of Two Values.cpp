#include<bits/stdc++.h>
using namespace std;
 
int main(){
	vector< pair<int,int> > cont;
	int range,sum;
	cin >>range >> sum;
	int x;
	for(int i = 0;i<range;i++){
		cin >> x;
		cont.push_back(make_pair(x,i+1));
	}
	sort(cont.begin(),cont.end());
	vector< pair<int,int> >::iterator ite;
//	for(ite = cont.begin();ite!=cont.end();ite++){
//		cout << ite->first <<" " << ite->second <<endl;
//	}
	int left = 0;
	int right = cont.size()-1;
	while(left<right){
		if(cont[left].first+cont[right].first == sum){
			cout << cont[left].second << " " << cont[right].second;
			return 0;
		}
		else if(cont[left].first+cont[right].first<sum)left++;
		else right--;
	}
	cout << "IMPOSSIBLE";
	return 0;
}
