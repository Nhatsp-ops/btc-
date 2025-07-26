#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
        int tich =1;
    for(int j=0;j<m;j++){
    if(a[j][i]%2==0) tich*=a[j][i];
    }
if(tich!=1){cout << tich<<  " ";} else cout <<  " ";
}}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}























































