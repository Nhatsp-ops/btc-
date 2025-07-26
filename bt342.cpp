#include<bits/stdc++.h>
using namespace std;
int n,m;
bool cucdai(vector<vector<double>>& a,int i,int j){
int dx[] ={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,1,-1,1,0,1,-1};
for(int k=0;k<8;k++){
    int x=i+dx[k], y=j+dy[k];
    if(x>=0 && x<m&& y>=0&&y<n)
    if(a[i][j]<=a[x][y]) return false;
}
return true;
}
void nhapmang(vector<vector<double>>& a,int n,int m){
    double max=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(cucdai(a,i,j)) max++;}
    }
    cout << max;
}
int main(){


    cin >> n>>m;
    vector<vector<double>> a(n,vector<double>(m));
nhapmang(a,n,m);
    return 0;}


























































