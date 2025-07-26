#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<vector<int>>& a,int n,int m,int x,int y){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin >> a[i][j];
    }
    }
    swap(a[x],a[y]);
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cout << a[i][j]<<" ";
    }
    cout << endl;
    }
}
int main(){
int n,m,x,y;

    cin >> n>>m>> x >> y;
    vector<vector<int>> a(n,vector<int>(m));
nhapmang(a,n,m,x,y);
    return 0;}



















































































