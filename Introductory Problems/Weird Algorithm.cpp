// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define ll long long
int main() {
   ll n;
   cin >> n;
   cout << n << " ";
   while(true){
       if(n == 1)break;
       else {
           if(n%2 == 0){
               n/=2;
               cout << n << " ";
           }
           else {
               n*=3;
               n++;
               cout << n << " ";
           }
       }
   }
 
    return 0;
}
