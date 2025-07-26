
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
int dem=0;
for(auto x:a){
    if(find(b.begin(),b.end(),x)==b.end()) cout <<x<<" ";
}
for(auto x:b){
     if(find(a.begin(),a.end(),x)==a.end()) cout<<x<<" ";
}
}
int main(){
    int n,m,x,y;
    cin >> n>>m;
vector<int> a,b;
nhapmang(a,b,n,m);
    return 0;}















