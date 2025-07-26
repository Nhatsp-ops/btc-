#include<bits/stdc++.h>
using namespace std;
int nhapmang(vector<vector<int>>& a,int n,int m){

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(a[i][j]%2==0&& a[i][j]<2004)return 1;}
    }
    return 0;
}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
cout << nhapmang(a,n,m);
    return 0;}




















































