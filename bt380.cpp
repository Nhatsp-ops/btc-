#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
    int min1= INT_MAX;
    bool found=false;
    unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    mp[a[i][j]]++;
    if(a[i][j]%2==0){
            found =true;
    if(a[i][j]<min1)
            min1=a[i][j];}
    }
    }
    if(found)
    cout << mp[min1];
    else cout << -1;
}
int main(){
int n,m;

    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}
















































































