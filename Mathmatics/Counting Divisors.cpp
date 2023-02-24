#include<bits/stdc++.h>
using namespace std;
 
int divisors(int x){
	int count = 0;
	for(int i = 1;i*i<=x;i++){
		if(x%i == 0)count++;
	}
	int sq = sqrt(x);
	if(sq*sq == x)return (count*2)-1;
	return count*2;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		cout << divisors(x) << endl;
	}
	
	
	
	return 0;
}
