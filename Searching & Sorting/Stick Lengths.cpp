#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll range;
    cin >> range;
    ll array[range];
    for(ll i = 0;i<range;i++)cin >> array[i];
    sort(array,array+range);
     ll leftSum = 0;
     ll rightSum = 0;
     ll mid = range/2;
     if(range%2 == 0){
     	for(ll i = 0;i<mid;i++)leftSum +=array[i];
     	for(ll i = mid;i<range;i++)rightSum +=array[i];
     	cout << rightSum-leftSum;
	 }
	 else{
	 	for(ll i = 0;i<mid;i++)leftSum += array[i];
	 	for(ll i = mid+1;i<range;i++)rightSum += array[i];
	 	cout << rightSum-leftSum;
	 }
    return 0;
}
