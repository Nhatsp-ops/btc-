#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   string s= to_string(n);
   for(int i=s.size()-2;i>=0;i--){
    if((s[i]-48)>= s[i+1]-48){cout <<"NO";return 0;}}
   cout << "YES";
    return 0;
}























