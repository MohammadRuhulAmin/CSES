#include<bits/stdc++.h>
using namespace std;
int diviorOfFive(int n){
	int count = 0;
	for(int i = 5;i<=n;i+=5){
		int x = i;
		while(x%5 == 0){
			count++;
			x/=5;
		}	
	}
	return count;
}
int main(){
	int n;
	cin >> n;
	cout << diviorOfFive(n);
	return 0;
}
