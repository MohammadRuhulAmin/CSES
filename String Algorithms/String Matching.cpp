#include<bits/stdc++.h>
using namespace std;
vector<int>lpsFunc(string pattern){
	int length = pattern.length();
	vector<int>lps(length);
	int left = 0;
	int right = 1;
	while(right<length){
		if(pattern[left] == pattern[right]){
			lps[right] = left+1;
			++left;++right;
		}
		else{
			if(left!=0)left = lps[left-1];
			else {
				lps[left] =  left;
				right++;
			}
		}
	}
	return lps;
}
int main(){
	string text,pattern;
	cin >> text >> pattern;
	int pLength = pattern.length();
	string newPattern = pattern+'#'+text;
	vector<int>lps = lpsFunc(newPattern);
	int count = 0;
	int arSize = lps.size();
	for(int i = 0;i<arSize;++i){
		if(pLength == lps[i])++count;
	}
	cout << count;
	return 0;
}
