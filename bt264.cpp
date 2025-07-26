#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,vector<int>& b,int n,int m){
for(int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<m;i++){
    cin >> b[i];
}
}
void inmang(vector<int> a,vector<int> b,int n,int m){
vector<int> v=a;
v.insert(v.end(),b.begin(),b.end());
sort(v.begin(),v.end());
for(auto x:v){
cout<< x << " ";

}}

int main(){
    int n,m;
    cin >> n>>m;
vector<int> a(n);
vector<int> b(m);
nhapmang(a,b,n,m);
inmang(a,b,n,m);
    return 0;}


















