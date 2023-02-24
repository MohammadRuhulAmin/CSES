#include<bits/stdc++.h>
using namespace std;
string generateString(char x, int c){
	string str = "";
	for(int i = 0;i<c;i++){
		str+=x;
	}
	return str;
}
string reverseString(string str){
	int length = str.length();
	string rev = "";
	for(int i = length-1;i>=0;i--)rev+=str[i];
	return rev;
}
bool isPalindrom(string str){
	int length =str.length();
	for(int i = 0,j = length-1;i<=j;i++,j--){
		if(str[i]!=str[j])return false;
	}
	return true;
}
int main(){
	string str;
	cin >> str;
	int length = str.length();
	vector<pair<char,int> >cont;
	vector<pair<char,int> >::iterator ite;
	bool flag[length];
	bool hasSolution = true;
	memset(flag,false,sizeof(flag));
	for(int i = 0;i<length;i++){
		if(!hasSolution)break;
		if(!flag[i]){
			char x = str[i];int count = 1;
			for(int j = 0;j<length;j++){
				if(x == str[j] && i!=j && !flag[j]){
					count++;
					flag[j] = true;
				}
			}
			cont.push_back(make_pair(x,count));
		}
	}
	sort(cont.begin(),cont.end());
	int totalChar = 0;
	int char_count = 0;
	sort(cont.begin(),cont.end());
	string leftString = "";
	string rightString = "";
	string middleString = "";
	for(ite = cont.begin();ite!=cont.end();ite++){
		if(ite->second%2 !=0)middleString+=generateString(ite->first,ite->second);
		else{
			int half = ite->second/2;
			leftString += generateString(ite->first,half);
			rightString += generateString(ite->first,half);
		}
	}
	rightString = reverseString(rightString);
	string ans = leftString + middleString + rightString;
	if(!isPalindrom(ans))cout << "NO SOLUTION";
	else {
		if(ans.length() == length-1)cout << str;
		else cout << ans;
	}
	return 0;
}
Share code to others
T
