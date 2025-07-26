#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
    int max1=0;
    vector<pair<double,int>> v;
for(int i=0;i<n;i++){
        int tong=0;
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    if(a[i][j]%2==0)
    tong++;
    }
v.push_back({tong,i});
if(tong > max1) max1=tong;
    }
    for(auto x:v){
        if(x.first==max1) {cout << x.second<<endl;}
    }
}
int main(){
int n,m;

    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}

















































































