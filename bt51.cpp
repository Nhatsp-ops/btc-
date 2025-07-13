#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   string s= to_string(n);
   int max =s[0]-48;
   for(int i=1;i<s.size();i++){
    if(max < s[i]-48) max=s[i]-48;
   }
   cout << max;
    return 0;
}















