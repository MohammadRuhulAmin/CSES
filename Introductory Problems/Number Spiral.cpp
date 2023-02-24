#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll test;
	cin >> test;
	while(test--){
		ll row,col;
		cin >> row >> col;
		if(row == col){
			ll ans = row*row - row+1;
			cout << ans << endl;
		}
		else if(row>col){
			if(row == col+1){
				if(row%2 == 0)cout << row*col +2 << endl;
				else cout << row*col  << endl;
			}
			else{
				if(row%2){
					ll distance = row-1;
					ll count = row-col-1;
					ll ans = row*col + (distance*count);
					cout << ans << endl;
				}
				else{
					ll ans = row*row-col+1;
					cout << ans << endl;
				}
			}
		}
		else {
			if(col == row+1){
				if(col%2 == 0)cout << row*col  << endl;
				else cout << row*col +2 << endl;
			}
			else if(col%2 == 0){
				ll distance = col-1;
				ll count = distance- row;
				ll ans = row*col + distance*count;
				cout << ans << endl;
			}
			else {
				ll dis = row-1;
				ll ans = col*col - dis;
				cout << ans << endl;
			}
		}
	}
	return 0;
}
