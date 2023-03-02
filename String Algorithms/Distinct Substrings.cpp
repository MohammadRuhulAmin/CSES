#include<bits/stdc++.h>

using namespace std;

/*
	gets tle !
*/

int getSubStr(string str){
	int length = str.length();
	set<char>alphabet;
	set<string>substr;
	for(int i = 0;i<length;i++){
		alphabet.insert(str[i]);
		for(int j = i;j<length;j++){
			string temp = str.substr(i,j-i+1);
			//cout << temp << endl;
			if(substr.count(temp) == 0){
				substr.insert(temp);
			}
		}
		if(alphabet.size() == 26) break;
	}
	
	return substr.size();
}

int main() {
    string str;
    cin >> str;
    printf("%d",getSubStr(str));
    
    
    return 0;
}

