#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dem=0;
   string s= to_string(n);
   for(auto x:s){
    if(x%2!=0)dem++;
   }
   cout << dem;
    return 0;
}













