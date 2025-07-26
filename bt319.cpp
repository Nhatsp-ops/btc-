#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
    vector<double> v;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    v.push_back(a[i][j]);}
    }
    sort(v.begin(),v.end());
    int k=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    a[i][j]=v[k++];}
    }
    for(auto row:a){
        for(auto val:row) cout << val <<  " ";
        cout << endl;
    }
}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}





















































