#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dem=1;
   string s= to_string(n);
   for(auto x:s){
    if(x%2!=0)dem*=(x-48);
   }
   if(n!=0)
   cout << dem;
   else cout << 0;
    return 0;
}















