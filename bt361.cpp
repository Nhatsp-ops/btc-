#include<bits/stdc++.h>
using namespace std;
int n,m;

void cucdai(vector<vector<int>>& a,int n,int m){
   for(int i=0;i<n;i++){
 bool duong=false,am=false,ko=false;
    for(int j=0;j<m;j++){
    if(a[i][j]<0)am=true;
    if(a[i][j]>0) duong = true;
    if(a[i][j]==0) ko=true;
    }
    if(duong && am && ko) cout << i << endl;
    }
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







































































