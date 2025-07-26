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
void nhapmang(vector<vector<double>>& a,int n,int m){
    unordered_set<double> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    mp.insert(a[i][j]);}
    }
    cout << mp.size();
}
int main(){

int n,m,x;
    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}

























































