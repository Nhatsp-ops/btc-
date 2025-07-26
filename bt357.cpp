#include<bits/stdc++.h>
using namespace std;
int n,m;
bool snt(int a){
if(a< 2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
       return false;
    }
}
 return 1;
}
void cucdai(vector<vector<int>>& a,int n,int m){
   for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
    if(snt(a[i][j])) {cout << i<<endl;break;}}
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




































































