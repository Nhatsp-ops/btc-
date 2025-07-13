#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   string s= to_string(n);
   string s2=s;
  reverse(s.begin(),s.end());
  if(s==s2)
   cout << "YES";
   else cout << "NO";
    return 0;
}





















