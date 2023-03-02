#include<bits/stdc++.h>
using namespace std;

void permutation(string str){
	sort(str.begin(),str.end());
	vector<string> perm;
	do{
		perm.push_back(str);
	}while(next_permutation(str.begin(),str.end()));
	cout << perm.size() << endl;
	for(auto x:perm){
		cout << x << endl;
	}
}

int main(){
	string str;
	cin >> str;
	permutation(str);
	
	
	return 0;
}
