#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
    int maxdem=0;
    double max;
    unordered_map<double,int> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
            double val=a[i][j];
    mp[val]++;
    }
    }
    for(auto x:mp){
        if(x.second>maxdem) {max=x.first;maxdem=x.second;}
    }
    cout << max;
}
int main(){
int n,m;

    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}















































































