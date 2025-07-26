#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;}
void nhapmang(vector<int>& a,int n,int k){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
a.erase(a.begin()+k);
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n>>k;
vector<int> a(n);
nhapmang(a,n,k);
    return 0;}
























