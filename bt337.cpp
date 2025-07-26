#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a< 2) return false;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
       return false;
    }
}
 return 1;
}
void nhapmang(vector<vector<int>>& a,int n,int m){
 int max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    string s=to_string(a[i][j]);
    max+=s.size();
    }}
    cout << max;
}
int main(){

int n,m,x;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}
























































