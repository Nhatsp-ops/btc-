#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   string s= to_string(n);
   int max =s[0]-48;
   int dem =1;
   for(int i=1;i<s.size();i++){
    if(max < s[i]-48) {max=s[i]-48;
    dem=1;}
   else if(max==s[i]-48) dem++;}
   cout << dem;
    return 0;
}

















