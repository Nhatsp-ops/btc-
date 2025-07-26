#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<int>& a){
 vector<int> b;
 for(auto x:a){
    if(x<0){
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














































