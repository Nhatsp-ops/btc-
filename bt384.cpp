#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
    int maxdem=0;
    int max;
    unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    string s=to_string(a[i][j]);
    for(auto c:s){
            int val=c-48;
    mp[val]++;
    }
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
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}















































































