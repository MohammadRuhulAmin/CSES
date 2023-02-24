#include<bits/stdc++.h>
using namespace std;
int main(){
	int range;
	cin >> range;
	if(range>=2 && range<=3)cout << "NO SOLUTION";
	else if(range == 1)cout << "1";
	else{
		if(range%2 == 0){
			for(int i = 2;i<=range;i+=2)cout << i <<" ";
			for(int i = 1;i<range;i+=2)cout << i <<" ";
		}
		else{
			for(int i = 1;i<=range;i+=2)cout << i <<" ";
			for(int i = 2;i<range;i+=2)cout << i <<" ";
		}
	}
	return 0;
}
