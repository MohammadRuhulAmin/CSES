#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int range;
	cin >> range;
	int array[range];
	for(int i = 0;i<range-1;i++)cin >> array[i];
	bool flag[range+1];
	memset(flag,false,sizeof(flag));
    for(int i = 0;i<range-1;i++){
    	int val = array[i];
    	flag[val] = true;
	}
	for(int i = 1;i<=range;i++){
		if(!flag[i]){
			cout << i ;
		
		}
	}
 
    return 0;
}
