#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   string s= to_string(n);
   for(int i=0;i<s.size();i++){
    if((s[i]-48)%2==1){cout <<"NO";return 0;}}
   cout << "YES";
    return 0;
}





















