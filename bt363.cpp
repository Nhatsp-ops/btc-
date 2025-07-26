#include<bits/stdc++.h>
using namespace std;
int n,m;
void cucdai(vector<vector<int>>& a,int n,int m){
   for(int i=0;i<m;i++){
        bool found=true;
    for(int j=0;j<n-1;j++){
    if(a[j][i]>a[j+1][i]) {found=false;break;}}
   if(found) cout << i << " ";}
}
void nhapmang(vector<vector<int>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
}
int main(){


    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
cucdai(a,n,m);
    return 0;}

