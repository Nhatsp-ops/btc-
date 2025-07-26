
#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int> a,vector<int> b,int n,int m){
for(int i=0;i<n;i++){
    int x;
    cin >> x;
  a.push_back(x);
}
for(int i=0;i<m;i++){
    int x;
    cin >> x;
  b.push_back(x);
}
for(auto x:a){
    cout << x<< ":"<<count(b.begin(),b.end(),x)<<endl;
}
}
int main(){
    int n,m,x,y;
    cin >> n>>m;
vector<int> a,b;
nhapmang(a,b,n,m);
    return 0;}

















