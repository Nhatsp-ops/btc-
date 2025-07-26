#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0) return 0;
}
return 1;
}
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<int>& a){
 vector<int> b;
 for(auto x:a){
    if(snt(x)){
        b.push_back(x);
    }
 }
 for(auto x:b){
    cout << x << " ";
 }
 }
int main(){

int n,x,k;
    cin >> n;
    vector<int> a(n);
nhapmang(a,n);
contang(n,a);
    return 0;}















































