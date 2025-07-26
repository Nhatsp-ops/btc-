#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m){
    double tich=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(a[i][j]%2==1) if(tich==0) {tich=a[i][j];} else{tich*=a[i][j];}
    }

}
cout << tich;}
int main(){

int n,m;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m);
    return 0;}






















































