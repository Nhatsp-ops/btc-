#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a< 2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
       return false;
    }
}
 return 1;
}
void nhapmang(vector<vector<double>>& a,int n,int m,int x){
    unordered_map<double,int> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    mp[a[i][j]]++;}
    }
    cout << mp[x];
}
int main(){

int n,m,x;
    cin >> n>>m>>x;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m,x);
    return 0;}
























































