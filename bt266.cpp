#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}
void inmang(vector<int>& a,int n,int x,int k){
a.insert(a.begin()+k,x);
for(auto i:a){
    cout << i<<" ";
}
}

int main(){
    int n,x,k;
    cin >> n>>x>>k;
vector<int> a(n);
nhapmang(a,n);
inmang(a,n,x,k);
    return 0;}




















