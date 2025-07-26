#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
    double max1=-numeric_limits<double>::max();
    vector<pair<double,int>> v;
for(int i=0;i<n;i++){
        double tong=0;
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    tong+=a[i][j];
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
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}
















































































