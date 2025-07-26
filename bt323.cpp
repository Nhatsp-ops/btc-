#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
            int tong=0;
    for(int j=0;j<m;j++){
    tong+=a[j][i];}
    cout << tong << " ";}
}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}























































