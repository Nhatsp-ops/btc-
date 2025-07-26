#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
    double min1= numeric_limits<double>::max();
    unordered_map<double,int> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    mp[a[i][j]]++;
    if(a[i][j]<min1) min1=a[i][j];
    }
    }
    cout << mp[min1];
}
int main(){
int n,m;

    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}















































































