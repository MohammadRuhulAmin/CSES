#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll range;
	cin >> range;
	ll array[range];
	for(ll i = 0;i<range;i++)cin >> array[i];
	ll maxSum = INT_MIN;
	ll cSum = 0;
	for(ll i = 0;i<range;i++){
		cSum +=array[i];
		if(cSum>maxSum)maxSum = cSum;
		if(cSum<0)cSum = 0;
	}
	cout << maxSum;
	return 0;
}
 
/*
 
8
-2 -3 4 -4 -2 1 5 -3
kadan's Algorithm 
1)Start summing the elements starting with the first element .Record the max sum as 0
2)If current sum is grater than the max sum, assign it to the max sum
3)if current sum is less than 0, restart summing from the next element
4)
 
*/
