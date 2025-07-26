#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(i==0 || i==n-1 ||j==0||j==m-1) max+=a[i][j];}
    }
    cout << max;
}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}























































