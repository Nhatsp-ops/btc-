#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<double>>& a,int n,int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(a[i][j]<0) a[i][j]=round(a[i][j]);}
    }
    for(auto row:a){
        for(auto val :row){
            cout << val << " ";
        }
        cout << endl;
    }
}

int main(){

int n,m;
    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}























































