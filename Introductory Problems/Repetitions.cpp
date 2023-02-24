#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int ans = 0;
	int length = str.length();
	char arr[4] = {'A','C','T','G'};
	for(int i = 0;i<4;i++){
		char x = arr[i];
		int count = 1;
		for(int j = 0;j<length-1;j++){
			if(str[j] == x && str[j+1] == x){
				count++;
			}
			else{
				if(ans<count)ans = count;
				count = 1;
			}
		}
		if(ans<count)ans = count;
	}
	cout << ans;
	
	return 0;
}
